//Question1: Frind the largest number from given 3 number in C++?
-------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"max="<<a;
        }
        else{
            cout<<"max="<<c;
        }
    }
    else{
        if(b>c){
            cout<<"max="<<b;
        }
        else{
            cout<<"max="<<c;
        }
    }
    return 0;
}

============================================================================================================================================================
// QUESTION 2 : Find the number whether it is EVEN or ODD in C++?
------------------------------------------------------------------------------------------------------------------------------------------------------------    
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"ENTER ANY NUMBER:";
    cin>>number;
    if(number%2==0){
        cout<<"Number is EVEN";
    }
    else{
        cout<<"Number is ODD";
    }
    
    return 0;
}

=================================================================================================================================================================
