CPU Process Scheduling Using Singly Linked List

1. Introduction

This project implements CPU Process Scheduling using the Round Robin algorithm and a Queue implemented with a Singly Linked List.

2. Objectives

- To understand CPU Process Scheduling.
- To implement a Queue using a Singly Linked List.
- To calculate Completion Time, Waiting Time, and Turnaround Time.

3. Technologies Used

- Programming Language: C++
- Data Structure: Singly Linked List and Queue
- Algorithm: Round Robin Scheduling

4. Operations

- Enqueue: Adds a process to the Queue.
- Dequeue: Removes a process from the Queue.
- Round Robin: Executes each process for a fixed Time Quantum.
- Completion Time: Calculates when a process finishes.
- Waiting Time: Calculates the waiting time of a process.
- Turnaround Time: Calculates the total time taken by a process.
- Average Time: Calculates average Waiting Time and Turnaround Time.

5. How to Run

1. Copy the C++ code.
2. Save it as "cpu_scheduling.cpp".
3. Compile and run the program.
4. Enter the number of processes.
5. Enter the Time Quantum.
6. Enter the Burst Time for each process.
7. View the scheduling results.

6. Formulas

- Turnaround Time = Completion Time - Arrival Time
- Waiting Time = Turnaround Time - Burst Time
- Average Waiting Time = Total Waiting Time / Number of Processes
- Average Turnaround Time = Total Turnaround Time / Number of Processes

Note: The program assumes that all processes arrive at time 0.

7. Conclusion

This project demonstrates Round Robin CPU Scheduling using a Queue and Singly Linked List. It calculates Completion Time, Waiting Time, Turnaround Time, and their averages.
