#include<iostream>

using namespace std;

class Demo
{
    public:
           int No1;
           int No2;

           void fun()
           {
                         cout<<"Inside fun....\n";
           }
};

int main()
{
        Demo obj1;
        Demo obj2;

        obj1.No1 = 11;
        obj1.No2 = 21;

        obj2.No1 = 51;
        obj2.No2 = 61;

        obj1.fun();
        obj2.fun();

        cout<<"Size of object..."<<sizeof(obj1)<<"\n";

        cout<<obj1.No1<<"\n";
        cout<<obj1.No2<<"\n";

        cout<<obj2.No1<<"\n";
        cout<<obj2.No2<<"\n";

        
    return 0;
}