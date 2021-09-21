
#include<bits/stdc++.h>
using namespace std;
class box{
float length;
float breadth;
float height;
public:
    box()
    {

    }
    box(float a,float b,float c)
    {
        length=a;
        breadth=b;
        height=c;
    }
     float get_length()
     {
         return length;
     }
     float get_breadth()
     {
         return breadth;
     }
     float get_height()
     {
         return height;
     }
      float get_volume()
     {
         return height*length*breadth;
     }
     void dimention()
     {
         cout<<"\nlength of box is:"<<length;
         cout<<"\nbreadth of box is:"<<breadth;
         cout<<"\nheight of box is :"<<height;

     }
     friend bool operator<(box obj1,box obj2);
     friend bool operator>(box obj1,box obj2);
     friend bool operator<=(box obj1,box obj2);
     friend bool operator>=(box obj1,box obj2);
     friend bool operator==(box obj1,box obj2);
    };
bool operator<(box obj1,box obj2)
{
    if(obj1.get_volume()<obj2.get_volume())
    {
        return true;
    }
    else{
        return false;
    }
}
bool operator<=(box obj1,box obj2)
{
    if(obj1.get_volume()<=obj2.get_volume())
    {
        return true;
    }
    else{
        return false;
    }
}
bool operator>(box obj1,box obj2)
{
    if(obj1.get_volume()>obj2.get_volume())
    {
        return true;
    }
    else{
        return false;
    }
}
bool operator>=(box obj1,box obj2)
{
    if(obj1.get_volume()>=obj2.get_volume())
    {
        return true;
    }
    else{
        return false;
    }
}
bool operator==(box obj1,box obj2)
{
    if(obj1.get_volume()==obj2.get_volume())
    {
        return true;
    }
    else{
        return false;
    }
}
void check(bool x)
{
    if(x==true)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;

    }
}
int main()
{   float a,b,c;
    cout<<"give dimention of first box length breadth height repectively:";
    cin>>a>>b>>c;
    box obj1(a,b,c);
     cout<<"give dimention of second box length breadth height repectively:";
    cin>>a>>b>>c;
    box obj2(a,b,c);
    bool x;
    x=obj1<obj2;
    check(x);
    x=obj1>obj2;
    check(x);
    x=obj1<=obj2;
    check(x);
    x=obj1>=obj2;
    check(x);
    x=obj1==obj2;
    check(x);
    return 0;


}
