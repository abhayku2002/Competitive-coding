
/*
Problem
Given an even integer 
�
N, output a permutation 
�
P of length 
�
N, such that:

The value of 
�
�
+
�
�
+
1
−
�
P 
i
​
 +P 
N+1−i
​
  is distinct for all 
1
≤
�
≤
�
2
1≤i≤ 
2
N
​
 .
It is guaranteed that a possible solution always exists. If multiple such permutations exist, print any.

Note that, a permutation 
�
P of length 
�
N, consists of all integers from 
1
1 to 
�
N exactly once. For example, 
[
2
,
1
,
3
,
4
]
[2,1,3,4] is a permutation, while 
[
2
,
2
,
1
,
3
]
[2,2,1,3] is not.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line containing a single even integer 
�
N.
Output Format
For each test case, output 
�
N space-separated integers, denoting the permutation 
�
P of length 
�
N.
*/

#include <iostream>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	
	for(int i = 1;i<=n/2;i++)
		cout<<i <<" ";
	for(int i = n;i>n/2;i--)
		cout<<i <<" ";
    cout<<endl;
}

	return 0;
}



