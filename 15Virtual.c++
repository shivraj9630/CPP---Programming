#include<iostream>
using namespace std;

class Base
{
          public:
                int A;
                int B;

                void Fun()
                {
                         cout<<"Inside Base Fun..."<<"\n";
                }

                void gun()
                {
                         cout<<"Inside Base gun..."<<"\n";
                }

                void sun()
                {
                         cout<<"Inside Base sun..."<<"\n";

                }
};

class Derived : public Base
{
          public:
                int X;
                int Y;

                void Fun()
                {
                         cout<<"Inside Derived fun..."<<"\n";
                }

                void gun()
                {
                         cout<<"Inside Derived gun..."<<"\n";
                }

                void sun()
                {
                         cout<<"Inside Derived sun..."<<"\n";
                }
};

int main()
{
        cout<<"Size of Base..."<<sizeof(Base)<<"\n";
        cout<<"Size of Derived..."<<sizeof(Derived)<<"\n";

        Base *bp = new Base;            // Dynamic memory allocation 
        Derived *dp = new Derived;

        Base *bp1 = new Derived;
       // Derived *dp1 = new Base;

        return 0;
}