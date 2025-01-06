"""
Suspense String
Alice and Bob are playing a game with a binary string 
S
S of length 
N
N and an empty string 
T
T.
They both take turns and Alice plays first.

In Alice's turn, she picks the first character of string 
S
S, appends the character to either the front or back of string 
T
T and deletes the chosen character from string 
S
S.
In Bob's turn, he picks the last character of string 
S
S, appends the character to either the front or back of string 
T
T and deletes the chosen character from string 
S
S.
The game stops when 
S
S becomes empty.
Alice wants the resultant string 
T
T to be lexicographically smallest, while Bob wants the resultant string 
T
T to be lexicographically largest possible.

Find the resultant string 
T
T, if both of them play optimally.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
N
N - the length of the string 
S
S.
The next line is the binary string 
S
S.
Output Format
For each test case, print the the resultant string 
T
T, if both of them play optimally.

"""



t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    a=''
    if(n%2==0):
        b=s[:n//2]
        c=s[n//2:]
    else:
        b=s[:(n//2)+1]
        c=s[(n//2)+1:]
    c=c[::-1]
    f=0
    i=0
    j=0
    while(i<len(b) and j<len(c)):
        x=b[i]
        if(int(a+x)<int(x+a)):
            a=a+x
        else:
            a=x+a
        i+=1
        y=c[j]
        if(int(a+y)>int(y+a)):
            a=a+y
        else:
            a=y+a
        j+=1
    if(n%2!=0):
        z=b[-1]
        if(int(a+z)<int(z+a)):
            a=a+z
        else:
            a=z+a
    print(a)