#include <iostream>
#include <stdbool.h>
using namespace std;


int fib(int n)
{
    int x;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    {
        
        x=fib(n-1)+fib(n-2);
        return x;
    }
    
   
}

int main()
{

    int a,b;
    cout<<"Enter the number";
    cin>>a;
    //b=fib(a);
    for(int i=1;i<a;i++)
    cout<<fib(i)<<'\t';
    return 0;
}