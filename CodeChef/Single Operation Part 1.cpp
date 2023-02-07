


/*

Problem
Chef has the binary representation 
�
S of a number 
�
X with him. He can modify the number by applying the following operation exactly once:

⊕ denotes the bitwise XOR operation.
Chef wants to maximize the value of 
�
X after performing the operation. Help Chef in determining the value of 
�
Y which will maximize the value of 
�
X after the operation.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two lines of inputs - the first containing the length of binary string 
�
S.
The second line of input contains the binary string 
�
S.
Output Format
For each test case, output on a new line, the value of 
�
Y which will maximize the value of 
�
X after the operation.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int num;
	    cin>>num;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<num;i++){
	        if(s[i]=='0'){
	            break;
	        }
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}


