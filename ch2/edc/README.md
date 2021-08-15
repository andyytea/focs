# Error-Detecting Codes

In today's day and age, information is constantly being transmitted over data networks represented as strings of bits. Surely, some of that data gets interfered with by noise.

So how do we combat this issue?

In order to detect changes in a single bit, we must be sure that **no 2 characters are represented by sequences of bits that differ in only one position**. If that position were changed, the result would be the code for the other character, and we could not detect that an error had occurred.

Observe the following two character codes:

01010101\
01000101

Notice that they differ by only one bit. One way that we can be sure no characters have codes that differ in only one position is to precede a 7-bit code for the character by a *parity bit*. At the cost of only one bit, we can be fairly confident in determining correctness of our data as follows:

If a string of bits has an odd number of bits, the string of bits has an *odd parity*.

If a string of bits has an even number of bits, the string of bits has an *even parity*.

Now, we choose to represent all 7-bit character codes as 8-bit codes with even parity (this is up to us, we could just as easily choose odd parity). That is, for all 7-bit characters with odd 1's, the 8th bit is set to 1. Conversely, for all 7-bit characters with even 1's, the 8th bit is set to 0.

It is very obvious that if every character has a distinct code with an even number of bits, that all characters differ by at least 2 bits. Observe:

1 => 10000001\
2 => 10000010\
3 => 00000011\
4 => 10000100\
5 => 00000101\
6 => 00000110

Thus, if any string of bits gets transmitted with an odd number of 1's we know that something is wrong.

Notice that there are 2^n possible strings of 8-bits, but with a parity bit, we are only able to represent half as many characters. However, 1 bit is a relatively small price to pay for detecting error in any 1 bit.

The real significance of this example is to show off the inductive proof:

If *C* is any set of bit strings of length n that is error detecting (i.e. no two strings differ in exactly one position), then *C* contains at most 2^(n-1) strings.

**Base Case**: 

P(1); that is, any error-detecting set of strings of length one has at most `2^(1-1) = 2^0 = 1` string. There are only two bit strings of length one. There are only two bit strings of length 1 (either 0 or 1) and we cannot have both of them in an error-detecting set because they differ by 1 position. Thus, every error-detecting set for `n = 1` must have at most one string as desired.

**Inductive Step**: 

Let `n = k, k >= 1` and assume `P(k)`. Now, prove `P(k + 1)`. Consider the sets of *C* where we have `C_0 = set of strings that begin with 0` and `C_1 = set of strings that begin with 1`. Now consider the set `D_0 = the set consisting of C_0 with the leading 0 removed`. This leaves us with strings that still cannot differ by only one bit with at most `2^(n-1)` strings, thus making `D_0` an error-detecting set with strings of length `n`. Thus `C_0` has at most `2^(n-1)` strings. Similarly we can show the same logic for `C_1`. Therefore, *C* has at most `2^(n-1) + 2^(n-1) = 2^n`.

Thus, we have proved `P(n) => P(n + 1)` and by POMI, P(n) holds true as desired.
