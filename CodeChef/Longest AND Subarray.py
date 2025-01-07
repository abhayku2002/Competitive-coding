"""
You are given an integer 
N
N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). Find the length of the longest subarray 
in this sequence such that the bitwise AND of all elements in the subarray is positive.

Input Format
The first line contains 
T
T denoting the number of test cases. Then the test cases follow.
Each test case contains a single integer 
N
N on a single line.
Output Format
For each test case, output on a single line the length of the longest subarray that satisfy the given property.
"""

import math
def Power(n):
    ans,x=1,2
    while(n!=0):
        if(n&1==1):
            ans=ans*x
        x=x*x
        ans=ans>>1
    return ans
for _ in range(int(input())):
    n=int(input())
    ans=0
    temp=1
    for i in range(31,-1,-1):
        if(n>>i&1==1):
            ans=1<<i
            if(i!=0):
                temp=1<<(i-1)
            break;
    print(max(n-ans+1,temp))