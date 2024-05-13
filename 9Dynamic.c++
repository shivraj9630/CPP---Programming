#include<iostream>
using namespace std;

class Demo
{
          public:
                int A;
                int B;

                Demo()
                {
                     cout<<"Inside Default constructor..."<<"\n";
                }

                Demo(int i, int j)
                {
                     cout<<"Inside Parameterised constructor..."<<"\n";
                }

                ~Demo()
                {
                     cout<<"Inside Destructor..."<<"\n";
                }

};

int main()
{
       cout<<"Inside main.........................................."<<"\n";
       Demo obj1;
       Demo obj2(11,21);

       Demo *p = new Demo();
       Demo *q = new Demo(11,21);

       delete p;
       delete q;
       
       cout<<"End of the main..........................................."<<"\n";

       return 0;
}