
'''

https://www.codechef.com/problems/PROGLANG
Problem
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.

Currently, Chef has to use a language with two given features 
�
A and 
�
B. He has two options --- switching to a language with two features 

 . All four features of these two languages are pairwise distinct.

Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).

Input Format
The first line of the input contains a single integer 
�
T denoting the number of test cases. The description of 
�
T test cases follows.
The first and only line of each test case contains six space-separated integers 
'''
T = int(input())
for i in range(T):
    A,B,A1,B1,A2,B2 = map(int,input().split())
    if (A1==A or A1==B) and (B1==A or B1==B):
        print("1")
    elif (A2==A or A2==B) and (B2==A or B2==B):
        print("2")
    else:
        print("0")
    
