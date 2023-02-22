
/*
Problem
Given an integer 
�
N, find four positive distinct integers 
�
a, 
�
b, 
�
c and 
�
d such that:

1
≤
�
,
�
,
�
,
�
≤
1
0
18
1≤a,b,c,d≤10 
18
 
(
(
�
&
�
)
∣
�
)
⊕
�
=
�
((a&b)∣c)⊕d=N
Here 
&
&, 
∣
∣, and 
⊕
⊕ represent bitwise AND, OR and XOR, respectively.

If there are multiple answers, print any of them. If no answer exists, print 
−
1
−1.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of one line of input, containing a single integer 
�
N.
Output Format
For each test case, output 
−
1
−1 if there is no way to find four distinct integers to satisfy the equation.

Otherwise, print on a new line any four space-separated integers 
�
a, 
�
b, 
�
c and 
�
d that satisfy the conditions.
*/
