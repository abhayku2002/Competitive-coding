
/*
In a Chess match "a + b", each player has a clock which shows 
�
a minutes at the start and whenever a player makes a move, 
�
b seconds are added to this player's clock. Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. If the time on some player's clock hits zero (but not only in this case), this player loses the game.

There's a 3 + 2 blitz chess match. After 
�
N turns (i.e. 
⌊
�
+
1
2
⌋
⌊ 
2
N+1
​
 ⌋ moves made by white and 
⌊
�
2
⌋
⌊ 
2
N
​
 ⌋ moves made by black), the game ends and the clocks of the two players stop; they show that the players (white and black) have 
�
A and 
�
B seconds left respectively. Note that after the 
�
N-th turn, 
�
=
2
b=2 seconds are still added to the clock of the player that made the last move and then the game ends.

Find the total duration of the game, i.e. the number of seconds that have elapsed from the start of the game until the end.

Input
The first line of the input contains a single integer 
�
T denoting the number of test cases. The description of 
�
T test cases follows.
The first and only line of each test case contains three space-separated integers 
�
N, 
�
A and 
�
B.
Output
For each test case, print a single line containing one integer — the duration of the game.
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int m = 2 * (180 + n);
        m = m -(a+b);
        cout<<m<<endl;
        
    }
    
	return 0;
}


//Solution 2:

#include <iostream>
using namespace std;

void solve()
{
    int n,a,b;
	cin>>n>>a>>b;
    int tt,tl,duration;
    tt=2*(180+n);
    tl=a+b;
    duration=tt-tl;
    cout<<duration<<endl;
    //return duration;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	    
	}
	return 0;
}

