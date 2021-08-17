# The Running Time of Programs

When choosing an algorithm, we consider simplicity, clarity, and efficiency.

When we know that a program is to be run repeatedly, its efficiency and that of its underlying algorithm become critical. Generally, we associate efficiency with **time**, but often times there are other resources to be conserved including:

1. Space/Storage
2. Traffic generated on a network or frequency
3. Amount of data moved between disks

The 2 principal approaches to summarizing running time are: **benchmarking** and **analysis**.

## Profiling

In conjunction with benchmarking, it is often useful to determine where a program is spending its time. This method of evaluating program performance is called *profiling* and most programming environments have tools called *profilers*. A related utility is a *statement counter* similar to the one presented in the chapter 2 implementation of [selection sort](../ch2/sorting/selection_sort.c) where it counted comparisons and swaps.

## Locality and Hot Spots

The easiest way to speed up a program is to profile it and then apply code improvements to its "hot spots". This sheds light on the idea that we often find programs spending 90% of their time in 10% of the code.

# Big-O and Approximate Running Time

Let `T(n)` be a function which is typically the running time of some program, measured as a function of the input size `n`. We assume that the argument `n` is restricted to be a non-negative integer and the value `T(n)` is non-negative for all arguments `n`. Let `f(n)` be some function defined on the non-negative integers `n`. We say that `T(n) is O(f(n))`.

Formally, we say `T(n) is O(f(n)) if there exists an integer n_0 and a constant c > 0 such that for all integers n >= n_0, we have T(n) <= c*f(n)`.

We call the pair `n_0` and `c` the `witnesses` to the fact that `T(n) is O(f(n))`. The witnesses are then said to `testify` to the Big-O relationship of `T(n)` and `f(n)` in a form of proof.

To write a Big-O proof, we typically use the following template:

1. State the witness `n_0` and `c`. These witnesses must be specific constants such that `n_0 is a non-negative integer` and `c is a positive real number`

2. Show that `if n >= n_0, then T(n) <= c*f(n), for particular witnesses n_0 and c chosen` 

Generally, we want the `tightest` upper bound that we can prove - since technically `O(n^2) is O(n^3)` but it is a weaker statement to make.

We regard a function as *simple* if it is a single term and the coefficient of that term is 1 (`n^2 is simple, but 2n^2 is not considered simple`).
