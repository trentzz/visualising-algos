# Visualising Algorithms

## Supported Algorithms
### Sorting Algorithms
### Partition Algorithms

- Hoare Partition

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
