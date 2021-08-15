# Proving Properties of Programs

Inductive proofs become essential when we need to prove that a program is able to do what it is claimed to do.

The following is a technique for explaining what an iterative program does as it goes around in a loop.

## Loop Invariants

The key to proving a property of a loop is the *loop invariant*, or *inductive assertion*, which is a statement *S* that is true each time we enter a particular point in the loop. Then, we are able to write a proof by induction on a parameter that measures the number of times we have gone around the loop.

Example:\
In our [selection sort](../sorting/selection_sort.c) implementation, we will have a loop invariant `S(k): If we reach the test j < n in the for-statement with k as the value of loop index j, then the value of min is the index of the smallest of A[i...k-1]`

```c
int min;
for (int i = 0; i < len; ++i) {
    min = i;
    for (int j = i+1; j < len; ++j)
        if (arr[j] < arr[min])
            min = j;
    swap(&arr[i],&arr[min]);
}
``` 

Typically, the loop invariant is for the point just before the main test condition.

## Recursive Definitions

Recursive definition involves:

1. One or more basis rules, in which simple objects are defined.
2. One or more inductive rules, whereby larger objects are defined in terms of smaller ones.

Example: factorial `n! = n x (n-1)!`

## Recursive Functions

The call to a recursive function can be either direct (`a function calls itself from within itself`) or indirect (`a function F_1 calls a function F_2 and so on until a function F_k calls F_1`). 

The beauty of recursive programs are often the elegance in describing recursive solutions. Recursive algorithms often come from simply mimicking a recursive definition in the specification of a program.

```c
int factorial(int n)
{
    if (n <= 1)
        return 1; /* basis */
    else
        return n*factorial(n-1); /*induction*/
}
```
The result is a mathematically sound function for computing factorials.

Note: we didn't have to check that n was less than or equal to 1, but this is a defensive programming pattern. When defining recursive functions, it is wise to cover all "error cases" in the base case.
