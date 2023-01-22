
/*
Problem
Chef prepared two dishes yesterday. Chef had assigned the 
tastiness
tastiness 
�
1
T 
1
​
  and 
�
2
T 
2
​
  to the first and to the second dish respectively. The tastiness of the dishes can be any 
integer
integer between 
0
0 and 
�
N (both inclusive).

Unfortunately, Chef has forgotten the values of 
�
1
T 
1
​
  and 
�
2
T 
2
​
  that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by 
�
S.

Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?

It is guaranteed that at least one pair 
{
�
1
,
�
2
}
{T 
1
​
 ,T 
2
​
 } exist such that 
�
1
+
�
2
=
�
,
0
≤
�
1
,
�
2
≤
�
T 
1
​
 +T 
2
​
 =S,0≤T 
1
​
 ,T 
2
​
 ≤N.

Input Format
The first line of input contains a single integer 
�
T, denoting the number of testcases. The description of the 
�
T testcases follows.
The first and only line of each test case contains two space-separated integers 
�
N, 
�
S, denoting the maximum tastiness and the sum of tastiness of the two dishes, respectively.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,diff=0;
	    cin>>a>>b;
	    if(a>=b)
	    {
	        diff=b;
	    }
	    else{
	        diff=a-(b-a);
	    }
	    cout<<diff<<endl;
	}
	return 0;
}

