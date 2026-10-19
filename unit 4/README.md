Branch Database Management Using Two BSTs

Project Overview

This project implements a Branch Database Management Application using two Binary Search Trees (BSTs) in C++. It identifies common keys between two BSTs and merges their records into a single BST without duplicating keys.

 Objectives

- To implement two Binary Search Trees.
- To store branch records using keys and branch names.
- To identify common keys in both BSTs.
- To merge two BSTs into a single BST.
- To display records in ascending order.

Technologies Used

- Programming Language: C++
- Data Structure: Binary Search Tree (BST)
- Concepts: Recursion, Searching, Insertion, Inorder Traversal

Features

1. Insert branch records into two BSTs.
2. Search for common keys.
3. Merge records into a single BST.
4. Avoid duplicate keys during merging.
5. Display the merged database in ascending order.

 How to Run

1. Copy the C++ source code into a file named "main.cpp".
2. Compile the program using a C++ compiler.
3. Run the compiled program.
4. Enter the number of branches, keys, and branch names for both BSTs.
5. View the common keys and merged database.

Sample Input

BST 1:
10 Pune
20 Mumbai
30 Nashik

BST 2:
20 Mumbai
30 Nashik
40 Nagpur

Sample Output

Common Branch Keys:
20 - Mumbai
30 - Nashik

Merged Branch Database:
10 - Pune
20 - Mumbai
30 - Nashik
40 - Nagpur

 Applications

- Branch database management
- Record organization
- Duplicate key detection
- Data merging and searching

Conclusion

This project demonstrates how two Binary Search Trees can be used to manage branch records, identify common keys, and merge records into a single BST without duplicate keys. Inorder traversal displays the final records in ascending order.