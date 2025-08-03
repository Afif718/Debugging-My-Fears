#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

// We will use these to control thread access
mutex mtx;
condition_variable cv;

// Counters to track how many hydrogen and oxygen threads are ready
int hydrogenCount = 0;
int oxygenCount = 0;

void releaseHydrogen() {
    // Simulate the action of releasing hydrogen
    cout << "H";
}

void releaseOxygen() {
    // Simulate the action of releasing oxygen
    cout << "O";
}

// Hydrogen thread function
void hydrogen() {
    unique_lock<mutex> lock(mtx);

    // Wait until we can form a molecule (max 2 H allowed)
    while (hydrogenCount == 2) {
        cv.wait(lock);
    }

    hydrogenCount++;

    // If 2H and 1O are ready let them go and reset counters
    if (hydrogenCount == 2 && oxygenCount == 1) {
        releaseHydrogen();
        releaseHydrogen();
        releaseOxygen();

        // Reset the counters for the next water molecule
        hydrogenCount = 0;
        oxygenCount = 0;

        // Notify all waiting threads
        cv.notify_all();
    } else {
        // If we can't proceed yet, just unlock and wait
        cv.wait(lock);
    }
}

// Oxygen thread function
void oxygen() {
    unique_lock<mutex> lock(mtx);

    // Wait until we can form a molecule (only 1 O allowed)
    while (oxygenCount == 1) {
        cv.wait(lock);
    }

    oxygenCount++;

    // If 2H and 1O are ready let them go and reset counters
    if (hydrogenCount == 2 && oxygenCount == 1) {
        releaseHydrogen();
        releaseHydrogen();
        releaseOxygen();

        // Reset the counters for the next water molecule
        hydrogenCount = 0;
        oxygenCount = 0;

        // Notify all waiting threads
        cv.notify_all();
    } else {
        // If we can't proceed yet, just unlock and wait
        cv.wait(lock);
    }
}

// Test function to simulate the formation of water
int main() {
    // Example input: 6 H and 3 O to form 3 H2O
    thread threads[9];

    // Launch threads in a mixed order
    for (int i = 0; i < 6; ++i) {
        threads[i] = thread(hydrogen);
    }

    for (int i = 6; i < 9; ++i) {
        threads[i] = thread(oxygen);
    }

    // Join threads (wait for them to finish)
    for (int i = 0; i < 9; ++i) {
        threads[i].join();
    }

    cout << "\n";

    return 0;
}
