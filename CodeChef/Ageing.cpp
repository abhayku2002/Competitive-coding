/*
Problem
Chef's current age is 
20
20 years, while Chefina's current age is 
10
10 years.
Determine Chefina's age when Chef will be 
�
X years old.

Note: Assume that Chef and Chefina were born on same day and same month (just different year).

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single integer 
�
X, the age of Chef.
Output Format
For each test case, output Chefina's age when Chef will be 
�
X years old.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int x,y;
	    cin>>x;
	    y=x-10;
	    cout<<y<<endl;
	    
	}
	return 0;
}
