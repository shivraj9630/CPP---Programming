#include<iostream>
using namespace std;

class Demo
{
           public:
                 int No1;
                 int No2;

           Demo(int i, int j)
           {
                 No1 = i;
                 No2 = j;
           }

           void fun(int A, int B)
           {
                 cout<<"Inside Fun..."<<this->No1<<"\n";
                 cout<<"Inside Fun..."<<this->No2<<"\n";
           }

           void gun(int A)
           {
                cout<<"Inside gun..."<<this->No1<<"\n";
                cout<<"Inside gun..."<<this->No2<<"\n";         
           }

};


int  main()
{
        Demo obj1(11,21);
        Demo obj2(51,101);

        obj1.fun(10,20);
        obj2.gun(10);

        cout<<"Value of No1 from obj1..."<<obj1.No1<<"\n";
        cout<<"Value of No2 from obj1..."<<obj1.No2<<"\n";

        return 0;

}