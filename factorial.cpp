//divyansh
//23070123048
#include<iostream>
using namespace std;
int fact(int n)
{
    if (n<=1)
        return 1;

    else return (n*fact(n-1));
}
int main()
{
    int a;
    cout<<"Enter an integer: "<<endl;
    cin>>a;
    cout<<"Factorial is: "<<fact(a);
}
/* output:-
Enter an integer: 
4
Factorial is: 24
    */
