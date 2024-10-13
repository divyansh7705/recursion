//divyansh
//23070123048
#include<iostream>
using namespace std;

int sum(int n)
{
    if (n<=1)
        return n;
    else 
        return n + sum(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Sum is: "<<sum(num);
}


/* output:-
Enter a number: 
5
Sum is: 15
    */
