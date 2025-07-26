#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Use two stacks:
	// st: stores all pushed elements
	// min_st: keeps track of minimum elements to allow O(1) min retrieval
	stack<int> st;
	stack<int> min_st;

public:
	// Constructor
	minStack() 
	{ 
		// No special initialization needed as stacks start empty
	}

	// Push a number onto the stack
	void push(int num)
	{
		// Push into main stack
		st.push(num);

		// If min_st is empty or current num is <= min_st's top,
		// push it into min_st to update current minimum
		if(min_st.empty()){
			min_st.push(num);
		} else {
			if(num <= min_st.top()){
				min_st.push(num);
			}
		}
		/*
		Visualization:

		Push sequence: 3, 5, 2, 1

		st (main):    Top -> 1 -> 2 -> 5 -> 3
		min_st (min): Top -> 1 -> 2 -> 3

		min_st only stores values when a new minimum appears or equals the current minimum.
		*/
	}
	
	// Remove and return the top element of the stack
	int pop()
	{
		if(!st.empty()){
			// Store current top value
			int topval = st.top();

			// If this top value is also the current minimum,
			// pop it from min_st as well to update minimum
			if(!min_st.empty() && topval == min_st.top()){
				min_st.pop();
			}

			// Remove top from main stack
			st.pop();

			// Return popped value
			return topval;
		}

		// If stack empty, return -1
		return -1;
		
		/*
		Visualization:

		Before pop:
		st (main):    Top -> 1 -> 2 -> 5 -> 3
		min_st (min): Top -> 1 -> 2 -> 3

		Pop top (1):
		- topval == min_st.top() == 1, so pop min_st top
		After pop:
		st:    Top -> 2 -> 5 -> 3
		min_st: Top -> 2 -> 3
		*/
	}
	
	// Return top element without removing it
	int top()
	{
		if(!st.empty()){
			return st.top();
		}
		// Stack empty -> no top element
		return -1;
	}
	
	// Return current minimum element in O(1) time
	int getMin()
	{
		if(!min_st.empty()){
			return min_st.top();
		}
		// Stack empty -> no minimum element
		return -1;
	}
};


/*
Problem link: https://www.naukri.com/code360/problems/min-stack_3843991?leftPanelTabValue=PROBLEM

question: Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

1. Push(num): Push the given number in the stack.
2. Pop: Remove and return the top element from the stack if present, else return -1.
3. Top: return the top element of the stack if present, else return -1.
4. getMin: Returns minimum element of the stack if present, else return -1.
For Example:

For the following input: 
1
5
1 1
1 2
4
2
3

For the first two operations, we will just insert 1 and then 2 into the stack which was empty earlier. So now the stack is => [2,1]
In the third operation, we need to return the minimum element of the stack, i.e., 1. So now the stack is => [2,1]
For the fourth operation, we need to pop the topmost element of the stack, i.e., 2. Now the stack is => [1]
In the fifth operation, we return the top element of the stack, i.e. 1 as it has one element. Now the stack is => [1]

So, the final output will be: 
1 2 1
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
2
5
1 1
1 2
4
2
3
4
1 13
2
3
4
Sample Output 1 :
1 2 1
13 -1 -1
Explanation For Sample Input 1 :
For First Case - Similar to the example explained above. 

For Second Case - 
For the first operation, we will just insert 13 into the stack which was empty earlier. So now the stack is => [13]
In the second operation, we need to remove the topmost element 13 and return it for printing. Now the stack is => [] (empty)
For the third operation, we need to return the topmost element of the stack. As the stack is empty we will return -1. Now the stack is => [] (empty)
 In the fourth operation, we return the minimum element of the stack if it is not empty, i.e. -1 as it has no elements. Now the stack is => [] (empty)
Sample Input 2 :
2
4 
4
2
1 4
3
6
1 19
1 45
3
4
2
3
Sample Output 2 :
-1 -1 4
45 19 45 19


*/