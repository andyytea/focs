# Computer Science: The Mechanization of Abstraction

- CS is the **science** of abstraction - creating appropriate models for thinking about problems and devising the computational techniques to solve them.
- Back in 1992, CS was relatively new. CS is less concerned with the universe as it is, but more concerned with creating abstractions of real world problems that can be understood by **both** the computer itself and its users.

The **3** core concepts explored in the book are: data models, data structures, and algorithms

**Data Models**: 

- (context: abstractions) trees, lists, sets, relations, graphs, finite automata, grammars, logic 
- (context: programming languages) characters, integers, floats, structures, pointers, functions

**Data Structures**

- For all of the "missing" data models of a language, we write our own representations for these data models and call them *data structures*. In other words, data structures are methods for representing the data model of a programming language abstractions that are not explicitly part of a language.

**Algorithms**

- **Precise** and **unambiguous** specification of a sequence of steps that can be carried out by a computer. Across different implementations, we want to compare and analyze the running time and space consumed to assess the "quality" of an algorithm.

**Underlying Threads**

1. Design Algebra - in order to produce efficient low-level systems, we should be able to express and evaluate design trade-offs.
2. Recursion - useful technique for defining complex concepts in a simple, inductive manner.

# Data Models

In CS, a data model typically has two main aspects:

1. (static) The values that objects can assume - typically the **type system**
2. (dynamic) The operations you can perform on data - changing and creating values

Example: The List Data Model - a sequence of n elements with operations including: inserting new elements, deleting elements, concatenating lists, etc.

A **data model** would be a "list", while the related **data structure** would be something like a *linked list*.

Example: Data Models of System Software (OS) - files, directories, processes, pipes, text editors, etc.

# Software Design

The software development process spans several phases:

1. Problem definiton and specification
2. Design
3. Implementation
4. Integration and system testing
5. Installation and field testing
6. Maintenance

Note: Programming style, though mostly subjective, plays a major role in the design of software.
