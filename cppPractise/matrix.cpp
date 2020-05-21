#include <iostream>
#include <cstring>
#include <stdbool.h>
using namespace std;



int main()
{
    int a[5] [5],c;
    c=0;
    
    cout<<"enter the nos";
    for(int i=0;i<5;i++)
    {
        cout<<endl;
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        if((a[i][j]%2)==0)
        c++;
        }
    }
cout<<"Number of even numbers"<<c;
    return 0;
}