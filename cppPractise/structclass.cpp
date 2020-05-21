#include <iostream>
#include <cstring>
#include <stdbool.h>
using namespace std;

typedef struct {
    char *type;
    int wheels;

}Vehicle;

class Car{
    private:
    Vehicle C;
    public:
    
    void add(int w1,char *t1);
    void show();
};

class Lorry : public Car{
private:
    Vehicle A;

};

class Scooter :public Car{

};
void Car :: add(int w1,char *t1)
{
    C.wheels = w1;
    C.type = t1;
}
void Car::show()
{
    cout << C.wheels << endl;
    cout << C.type << endl;
}
int main()
{
    Car c1;
    Scooter s;
    c1.add(4 , "hatchback");
    //c1.add(4, "SUV");
    Lorry c2;
    //c2.add(6 , "MiniLOrry");
    c2.add(8 , "Container");
    c1.show();
    c2.show();
    //c1.show();
    s.add(2 , "Vespa");
    s.show();      
    return 0;
}