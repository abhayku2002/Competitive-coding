
/*
Problem
Read problem statements in Bengali, Russian, Mandarin and Vietnamese as well.
Chef has 

X coins worth 
1
1 rupee each and 

Y coins worth 
2
2 rupees each. He wants to distribute all of these 

X+Y coins to his two sons so that the total value of coins received by each of them is the same. Find out whether Chef will be able to do so.

Input Format
The first line of input contains a single integer 
�
T, denoting the number of testcases. The description of 
�
T test cases follows.
Each test case consists of a single line of input containing two space-separated integers 
�
X and 
�
Y.
Output Format
For each test case, print "YES" (without quotes) if Chef can distribute all the coins equally and "NO" otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/

#include <iostream>
using namespace std;

int main() {
	
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if((x+2*y)%2 or (x<2 and y%2))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
	return 0;
	
}
