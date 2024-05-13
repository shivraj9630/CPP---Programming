#include<iostream>
using namespace std;

class Demo
{
     public:
           int No1;
           int No2;

           Demo()
           {
                cout<<"Inside Default Constructor...\n";
                No1 = 11;
                No2 = 21;
           }

           Demo(int A, int B)
           {
                cout<<"Inside parameterised constructor...\n";
                No1 = A;
                No2 = B;
           }

           Demo(Demo &ref)
           {
                cout<<"Inside Copy Constructor...\n";
                No1 = ref.No1;
                No2 = ref.No2;
           }

           void fun()
           {
            cout<<"Inside fun...\n";
           }

           void gun()
           {
            cout<<"Inside gun...\n";
           }
};

int main()
{

       cout<<"Inside main..........\n";

       Demo obj1;
       cout<<"Value of No1 from obj1 is:"<<obj1.No1<<"\n";
       cout<<"Value of No2 from obj1 is:"<<obj1.No2<<"\n";

       Demo obj2(51,61);
       {
        cout<<"Value of No1 from obj2 is:"<<obj2.No1<<"\n";
        cout<<"Value of No2 from obj2 is:"<<obj2.No2<<"\n";
       }
       
       Demo obj3(obj1);
       {
        cout<<"Value of No1 from obj3 is:"<<obj3.No1<<"\n";
        cout<<"Value of No2 from obj3 is:"<<obj3.No2<<"\n";
       }



  return 0;
}