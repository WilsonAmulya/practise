#include <iostream>
#include <stdbool.h>
using namespace std;
struct Node 
{
    int data;
    Node * next;
};
class LinkedList
{
    Node* head;
    public:
    LinkedList()
    {
        head = NULL;
    }
    /*TODO: */
    void addNode(int val);    
    void deleteNode();
    void traverselist();
};

int swap(int &x , int &y)
{
    x = x+y; // 5 = 3 + 2 ; 
    y = x - y;
    x = x - y;
}


int main()
{

    int a = 5 , b = 10;
    swap(a,b);
    cout << a <<'\t' << b << endl;
    cout << "Hello world \n";
    return 0;
}