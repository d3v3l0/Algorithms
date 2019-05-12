# Algorithms
Solution for random algorithms from "Elements of Programming Interviews" in C++.

# Contents
* SubstringSearchEfficient.cpp:
Given an array of strings and a set of keywords to lookup, find the smallest subarray containing all keywords.
* LowestCommonAncestorEfficient.cpp:
Find the lowest common ancestor of 2 nodes in a binary tree in O(distance from node to LCA node), given that each node contains a pointer to its parent.
* InOrderIt.cpp: Iterative implementation of in order traversal of a binary tree given that nodes have a pointer to their parent.
* IntersectionOfTwoSortedArrays.cpp: Given 2 sorted arrays, return a set containing the common elements.
* BinaryManipulation.cpp: Contains various problem solved in O(1).
    * unsigned long long closestIntSameWeight(const unsigned long long x): Define the weight of an integer as the number of 1's it has in its binary representation. Given an integer, the following function finds the closest integer to it having the same weight.
    * bool test_if_pow_2(unsigned long long x): returns true if x is a power of 2.
    * unsigned long long mod_power_2(const unsigned long long x, const int p): returns x mod 2^p.
    * unsigned long long swap_bits(unsigned long long x, const int i, const int j): Swaps the ith and jth bits of x.