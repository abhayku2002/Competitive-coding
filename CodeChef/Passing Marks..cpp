
/*
Problem
In a class of 
�
N students, a class test was held. The 
�
�
ℎ
i 
th
  student scored 
�
�
A 
i
​
  marks. It is also known that the scores of all students were distinct.

A student passes the test if their score is strictly greater than the passing mark. Given that exactly 
�
X students pass in the test, find the maximum value of the passing mark of the test.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
�
N and 
�
X — the number of students in the class and the number of students that passed in the test.
The next line contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 , where the 
�
�
ℎ
i 
th
  integer denotes the marks of the 
�
�
ℎ
i 
th
  student.
Output Format
For each test case, output on a new line, the maximum value of the passing mark of the test.
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    cout<<a[n-x]-1<<endl;
	}
	return 0;
}
