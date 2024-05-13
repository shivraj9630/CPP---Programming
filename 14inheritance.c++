#include<iostream>
using namespace std;

class Demo
{
           public:
                 int A;
                 int B;

                 Demo()
                 {
                         A = 11;
                         B = 21;
                         cout<<"Inside Demo Constructor..."<<"\n";
                 }

                 ~Demo()
                 {
                         cout<<"Inside Demo Destructor..."<<"\n";
                 }

                 void fun()
                 {
                         cout<<"Inside Demo fun..."<<"\n";
                 }


};

class Hello 
{
          public:
                int X;
                int Y;

                Hello()
                {
                         X = 51;
                         Y = 101;
                         cout<<"Inside Hello Constructor..."<<"\n";
                }

                ~Hello()
                {
                         cout<<"Inside Hello Destructor..."<<"\n";
                }

                void gun()
                {
                         cout<<"Inside Hello gun..."<<"\n";
                }

};

class PPA : public Hello , public Demo
{
         public:
                int i;
                int j;

                PPA()
                {
                         i = 111;
                         j = 121;
                         cout<<"Inside PPA Constructor..."<<"\n";
                }

                ~PPA()
                {
                         cout<<"Inside PPA Destructor..."<<"\n";
                }

                void sun()
                {
                         cout<<"Inside PPA sun..."<<"\n";
                }

};
int main()
{
         cout<<"Inside Main......................................."<<"\n";

         cout<<"Size of Demo..."<<sizeof(Demo)<<"\n";
         cout<<"Size of Hello..."<<sizeof(Hello)<<"\n";
         cout<<"Size of PPA..."<<sizeof(PPA)<<"\n";
         
         PPA pobj;
         
         pobj.fun();
         pobj.gun();
         pobj.sun();

          cout<<pobj.A<<"\n";
          cout<<pobj.B<<"\n";
          cout<<pobj.X<<"\n";
          cout<<pobj.Y<<"\n";
          cout<<pobj.i<<"\n";
          cout<<pobj.j<<"\n";

          cout<<"End of the main....................................."<<"\n";


         return 0;
}