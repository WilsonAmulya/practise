#include <iostream>
#include <stdbool.h>
using namespace std;

void fact(int x)
{
    int m=1;
   for(int i=x;i>0;i--)
   {
       
       m*=i;
       
   }
   cout<<m;
}
int fact1(int x)
{
    if(x==1)
    return 1;
    else
    {
        x*=fact1(x-1);
        return x;
    }
    
   
}

int main()
{

    int a,b;
    cout<<"Enter the number";
    cin>>a;
    b=fact1(a);
    cout<<b;
    return 0;
}