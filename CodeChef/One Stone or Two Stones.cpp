
/*
Problem
Chef and Chefina are playing a game. There are two piles numbered 
1
1 and 
2
2.
Pile 
1
1 contains 
�
X stones while Pile 
2
2 contains 
�
Y stones.

Chef starts the game.

In his turn, Chef can either remove 
1
1 stone each from both the piles or remove 
2
2 stones from pile 
1
1.
On the other hand, Chefina, in her turn, can either remove 
1
1 stone each from both the piles or remove 
2
2 stones from pile 
2
2.
The player who cannot make a move loses. Determine the winner if both players play optimally.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line containing two integers 
�
X and 
�
Y, the initial number of stones in piles 
1
1 and 
2
2 respectively.
Output Format
For each test case, output CHEF if Chef wins the game, and CHEFINA otherwise.

You may print each character in uppercase or lowercase. For example, the strings CHEF, chef, Chef, and cHEf are all considered identical.
*/
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
	int x,y;
	cin>>x>>y;
	if(x==y){
	if(x%2!=0){
		cout<<"CHEF"<<endl;
		continue;
	}
	else{
		cout<<"CHEFINA"<<endl;
		continue;
	}
	}
	int diff = abs(x-y);
	if(diff>=2 && x>y){
		cout<<"CHEF"<<endl;
		continue;

	}
	else if(diff >=2 && x<y){
		cout<<"CHEFINA"<<endl;
		continue;
	}
	
	
	if(x%2!=0 && x>y){
		cout<<"CHEFINA"<<endl;
		continue;
	}
	else if(x%2==0 && x>y){
		cout<<"CHEF"<<endl;
		continue;
	}
	else if(y%2==0 && y>x){
		cout<<"CHEF"<<endl;
		continue;
	}
	else if(y%2!=0 && y>x){
		cout<<"CHEFINA"<<endl;
		continue;
	}

	}
	return 0;
}


