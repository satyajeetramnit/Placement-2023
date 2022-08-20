// Q1. Introduce yourself

// Q2. What is the difference between C and C++?
// C is a low level language. C++ is a high level language.
// C++ is a superset of C.
// C is a procedural with no support for objects and classes whereas 
// C++ is a combination of procedural and object-oriented programming languages.

// Q3. What is stack and queue?
// The Stack is one of the most important data structures in computer science. 
// Elements can be added to or removed from a stack at only one end. 
// Since we view this end as the "top" of the stack, we use the term "push" for add, and the term "pop" for remove. 
// Notice that the element popped from a stack is always the last one pushed onto it (among those still on it). 
// Therefore, a stack is referred to as a Last-In-First-Out (LIFO) list.

// The Queue is another data structure that is very similar to the stack. The difference is that the 
// Elements can be added only at one end, the "rear", Elements can be removed only at the other end, the "front".
// We call adding to a queue "enqueueing", and removing from a queue "dequeueing".
// Since the element dequeued is always the first one enqueued (among those still on it), 
// a queue is referred to as a First-In-First-Out (FIFO) list.


// Q4. Real life examples of stack and queue.
// Examples of stacks in "real life":
//     The stack of trays in a cafeteria;
//     A stack of plates in a cupboard;
//     A driveway that is only one car wide.

// Examples of stacks in computing:
//     Back/Forward stacks on browsers;
//     Undo/Redo stacks in Excel or Word;
//     Activation records of method calls;

// Examples of queues in "real life":
//     A ticket line;
//     An escalator;
//     A car wash.
// Examples of queues in computing:
//     A printer queue;
//     An input stream;


// Q5. What is the difference between pop and peek?
// Pop is used to remove the top element from the stack.
// Peek is used to return the top element of the stack without removing it.


// Q6. swap without third variable

#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}

// Explaination
// we first add a and b and then we subtract b from a and then we subtract a from b


// Q7. A man fell in a 50m deep well. He climbs 4 meters up and slips 3 meters down in one day. How many days would it take for him to come out of the well?

// Answer: 47days

// Explanation:
// On the first day, the man climbs 4 meters up and slips 3 meters down, therefore he only climbs 1 meter up totally.
// On the second day, again he climbs 1 meter up, so the total distance climbed is 2 meters till the second day. 
// Therefore, the man climbs 1 meter every day. Now as per the above pattern, on the 46th day, he must have climbed 46 meters. 
// So on the 47th day, he climbs full (46 + 4) 50 meters and after that, he will not slip as he is already out of the well 
// so the answer is 47 days.


// Q8. Explain Deadlock.
// Deadlock is a situation where two or more processes are waiting for each other to complete some task.


// Q9. Explain deadlock in database.
// In a database, a deadlock is a situation in which two or more transactions are waiting for one another to give up locks. 
// For example, Transaction A might hold a lock on some rows in the Accounts table and needs to update some rows in the Orders table to finish.


// Q10. Bankers Algorithm.
// The banker’s algorithm is a resource allocation and deadlock avoidance algorithm that tests for safety by simulating the allocation 
// for predetermined maximum possible amounts of all resources, then makes an “s-state” check to test for possible activities, 
// before deciding whether allocation should be allowed to continue.

// It is used in banking system to check whether loan can be sanctioned to a person or not. 
// Suppose there are n number of account holders in a bank and the total sum of their money is S. 
// If a person applies for a loan then the bank first subtracts the loan amount from the total money that bank has and 
// if the remaining amount is greater than S then only the loan is sanctioned. 
// It is done because if all the account holders comes to withdraw their money then the bank can easily do it.

// In other words, the bank would never allocate its money in such a way that it can no longer satisfy the needs of all its customers. 
// The bank would try to be in safe state always.