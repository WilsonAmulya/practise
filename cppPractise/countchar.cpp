#include <iostream>
#include <cstring>
#include <stdbool.h>
using namespace std;

int fun(char *a,char b)
{
    int c,count;
    count=0;
    c=strlen(a);
for(int i=0;i<c;i++)
    if(a[i]==b)
        count++;
    return count;
}

int main()
{
    char *a = "vinayak" ;
    char b;
    int c,count;
    count=0;
    c=strlen(a);
    cout << c<<endl;
    cout<<"Enter the char";
    cin>>b;
    count=fun(a,b);
    cout<<count;
    return 0;
}