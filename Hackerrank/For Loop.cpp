
/*
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.
*/
#include <iostream>
#include <cstdio>
using namespace std;

const char *english[]={"one","two","three","four","five","six","seven","eight","nine"};
int main() {
    int a,b;
    cin>>a>>b;
    while(b>=a){
        if((a>=1)&&(a<=9)){
            cout<<english[a-1]<<endl;
            }
        else{
            if((a%2)==0)
            
                cout<<"even"<<endl;
            
            else 
            
                cout<<"odd"<<endl;
            }
                
        ++a;
    }
    return 0;
}

/*
int a,b;
take input a,b;
int n (interval [a,b]/ b>=a);
if(1<=n)
*/
