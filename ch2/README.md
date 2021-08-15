# Iteration, Induction, and Recursion

The power of computers really comes from the ability to execute the same task (or different versions of the same task) repeatedly. 

Programs use **iteration** to perform repetitive jobs requiring a large number of similar steps to be specified individually.

**Recursion** is a technique that allows us to define a concept directly or indirectly in terms of itself. (ex. "a list is either empty or is an element followed by a list")

Closely related to recursion, we have **induction** commonly used in mathematical proofs.

*Proof by Induction* begins with a statement P(n) and we wish to prove that P(n) holds for all n in some domain. First we prove a basis (or a base case), then we must prove an inductive step (P(n) implies P(n+1) for n >= 0).In CS, this is typically for the purpose of *Proof of Program Correctness*.

Concepts:

[Sorting](sorting)

[Error Detecting Code](edc)

[Induction and Recursion](induction)
