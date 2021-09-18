#include<iostream>
#include<stdlib.h>
using namespace std;


class rectangle
{
    int l,b;
 public:
    rectangle()
    {
        l=b=0;
    }
    rectangle(int x)
    {
        l=b=x;
    }
    rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    int area();
};
int rectangle::area()
{
    return l*b;
}

int main()
{
    rectangle obj1,obj2(2),obj3(3,4);
    cout<<"area of first reactangle:"<<obj1.area();
    cout<<"\narea of second reactangle:"<<obj2.area();
    cout<<"\narea of third reactangle:"<<obj3.area();
    return 0;
}
