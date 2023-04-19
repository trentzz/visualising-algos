# Visualising Algorithms

## Supported Algorithms
### Sorting Algorithms
### Partition Algorithms

- Hoare Partition
- Lomuto Partition

### Problems

- 01 Knapsack with DP

## Usage

### Hoare Partition
```
$ ./hoare_partition        
Array Length: 9
 Enter Array: 9 8 7 6 5 4 3 2 1
   Enter Low: 0
  Enter High: 8

Pivot: 9

Loop Number: 1
Array: 9 8 7 6 5 4 3 2 1 
Iterator Indexes: i = 0, j = 8
Swapping values: 9 and 1
     At indexes: 0 and 8

Loop Number: 2
Array: 1 8 7 6 5 4 3 2 9 
Iterator Indexes: i = 8, j = 7
i >= j and so we return j

Return Index: 7
```
### Lomuto Partition
```
$ ./lomuto_partition
Array Length: 5
 Enter Array: 6 3 2 8 5
   Enter Low: 0
  Enter High: 4

Pivot: 5

Loop Number: 1
Array: 6 3 2 8 5 
Iterator Indexes: i = -1, j = 0

Loop Number: 2
Array: 6 3 2 8 5 
Iterator Indexes: i = -1, j = 1
Swapping values: 6 and 3
     At indexes: 0 and 1

Loop Number: 3
Array: 3 6 2 8 5 
Iterator Indexes: i = 0, j = 2
Swapping values: 6 and 2
     At indexes: 1 and 2

Loop Number: 4
Array: 3 2 6 8 5 
Iterator Indexes: i = 1, j = 3

Swapping values: 6 and 5
     At indexes: 2 and 4

Return Index: 2
```

### 0/1 Knapsack with DP
```
$ ./01_knapsack_dp
Enter number of items: 3
Enter profits: 10 4 56
Enter weights: 3 2 2
Enter max weight: 5
DP Table: 
0    0    0    0    0    0    
0    0    0    10   10   10   
0    0    4    10   10   14   
0    0    56   56   60   66   

Max Profit: 66
```
