"""
Link: https://www.codechef.com/START168D/problems/P2P

Make Odd
You are given two binary strings 
A
A and 
B
B, each of length 
N
N. Your task is to make your 
s
c
o
r
e
score odd which is initially 
0
0 by choosing 
N
N elements such that:

For each index 
i
i (
1
≤
i
≤
N
1≤i≤N), you will select either 
A
i
A 
i
​
  or 
B
i
B 
i

 .
If the character you select is equal to "1", add 
1 to the 
score. If the character is "0", add nothing.
Your goal is to determine whether it is possible to make the 
score an odd number. If it is possible, print YES, otherwise print NO.

"""

import sys
input  = sys.stdin.read
data = input().split()
T = int(data[0])
indexo = 1
results = []

for _ in range(T):   
    N = int(data[indexo]) 
    indexo += 1  
    A = data[indexo]  
    indexo += 1  
    B = data[indexo]  
    indexo += 1  

    single_ones = 0  
    total_ones = 0  

    for i in range(N):  
        if A[i] == '1' or B[i] == '1':  
            total_ones += 1  
            if (A[i] == '1' and B[i] == '0') or (A[i] == '0' and B[i] == '1'):  
                single_ones += 1  

    if total_ones % 2 == 1 or single_ones > 0:  
        results.append("YES")  
    else:  
        results.append("NO")  

sys.stdout.write("\n".join(results) + "\n")