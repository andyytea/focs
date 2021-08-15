# Sorting

To sort a list of n elements, we need to permute the elements of the list so that they appear in nondecreaseing order. 

By definition, a sorting algorithm takes as input an arbitrary list and produces as output a sorted list that is a permutation of the input.

[selection sort](selection_sort.c) - reads single digit numbers separated by any number of spaces or tabs, exits on newline '\n' or non-digits

# Why Do Inductive Proofs Work?

In an inductive proof, we prove a basis (often P(0)) and then we show that P(n) => P(n + 1) "P(n) implies P(n + 1)". We are "allowed" to assume P(n) for as long as we can prove P(n + 1); both of which are arbitrary values. 

Additionally, we can use proof of *"Least Counterexample"* where we suppose that P(n) did not hold for at least one value of n. If a is the least non-negative integer for which P(a) is false, then P(a - 1) must hold. If we find that P(a - 1) is true, then it must be that P(a) is true - a contradiction.
