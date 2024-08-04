# Vector of Vectors with Queries

This C++ program demonstrates how to handle a dynamic 2D array (vector of vectors) and perform queries on it. The user inputs the size of the array and its contents, followed by a number of queries to retrieve specific elements.

## Overview

The program consists of:
1. Reading the number of rows (vectors) and columns (elements in vectors) from user input.
2. Populating each vector with elements.
3. Handling queries to retrieve elements from specific positions in the vectors.

## Program Description

### Input

1. **n** - The number of vectors.
2. **q** - The number of queries.
3. For each vector:
   - **size** - The number of elements in the vector.
   - Followed by **size** integers which are the elements of the vector.
4. For each query:
   - Two integers **x** and **y** where **x** is the index of the vector and **y** is the index of the element within that vector.

### Output

For each query, the program outputs the element at position **[x][y]** in the vector of vectors.

### Code Explanation

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned int n; // Number of vectors
    unsigned int q; // Number of queries
    unsigned int size; // Size of each vector

    cin >> n >> q; // Input number of vectors and queries

    // Initialize a vector of vectors
    vector<vector<int>> VEC(n);

    // Read the vectors
    for (unsigned int x = 0; x < n; x++) {
        cin >> size; // Size of the current vector
        for (unsigned int y = 0; y < size; y++) {
            unsigned int temp;
            cin >> temp; // Input element
            VEC[x].push_back(temp); // Add element to the vector
        }
    }

    // Process queries
    for (unsigned int i = 0; i < q; i++) {
        unsigned int x;
        unsigned int y;
        cin >> x >> y; // Input query indices
        cout << VEC[x][y] << "\n"; // Output the element at [x][y]
    }

    return 0;
}

