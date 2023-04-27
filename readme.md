# Visualising Algorithms

## Supported Algorithms
### Sorting Algorithms
### Partition Algorithms

- Hoare Partition
- Lomuto Partition

### Problems

- 01 Knapsack with DP
- Tower of Hanoi with recursion

### Automata

- DFA (limited to alphabets {0,1})

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

### Tower of Hanoi with recursion
```
$ ./tower_of_hanoi
Enter number of disks: 3
Move Number: 0
A | 3 2 1 
B | 
C | 

Move Number: 1
A | 3 2 
B | 
C | 1 

Move Number: 2
A | 3 
B | 2 
C | 1 

Move Number: 3
A | 3 
B | 2 1 
C | 

Move Number: 4
A | 
B | 2 1 
C | 3 

Move Number: 5
A | 1 
B | 2 
C | 3 

Move Number: 6
A | 1 
B | 
C | 3 2 

Move Number: 7
A | 
B | 
C | 3 2 1
```

### DFA
```
$ ./dfa
Number of states: 3
Enter transitions:
Note that the starting state is 0
Syntax: <condition> <start> <end>
e.g. A transition from state 1 to 3 after seeing a '0' would be written as:> 0 1 3
Enter 'end' or 'q' to complete transitions.
> 0 0 1
> 1 0 1
> 0 1 2
> 1 1 2
> 0 2 2
> 1 2 2
> end

Enter number of end states: 1
2

Enter words:
Use 'epsilon' to denote the empty string.
Enter 'end' or 'q' to end program.

> epsilon
Word: epsilon is not accepting.

> 0
Word: 0 is not accepting.

> 111
Word: 111 is accepting.

> end
```

```
$ ./dfa
Number of states: 4
Enter transitions:
Note that the starting state is 0
Syntax: <condition> <start> <end>
e.g. A transition from state 1 to 3 after seeing a '0' would be written as:> 0 1 3
Enter 'end' or 'q' to complete transitions.
> 0 0 1
> 1 0 1
> end
You are missing a one transition from state: 1
```
