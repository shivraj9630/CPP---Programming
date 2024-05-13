#include<iostream>
using namespace std;

class Base
{
           public:
                int A;
                int B;

                int Add(int i, int j)
                {
                         cout<<"Inside Base Add..."<<"\n";
                         return i+j;
                }

                 virtual int Sub(int i, int j)
                {
                         cout<<"Inside Base Sub..."<<"\n";
                         return i-j;
                }

                 virtual int Mul(int i, int j) = 0;

};

class Derived : public Base
{
            public:
                 int X;
                 int Y;

                 int Sub(int i, int j)
                 {
                         cout<<"Inside Derived Sub..."<<"\n";
                         return i-j;
                 }

                 int Mul(int i, int j)
                 {
                         cout<<"Inside Derived Mul..."<<"\n";
                         return i*j;
                 }
};
int main()
{
          
          Base *bp = new Derived;
          
          int Ret = 0;

          Ret = bp ->Add(11,21);
          cout<<"Add is:"<<Ret<<"\n";

          Ret = bp ->Sub(11,21);
          cout<<"Add is:"<<Ret<<"\n";

          Ret = bp ->Mul(10,20);
          cout<<"Add is:"<<Ret<<"\n";


          return 0;

}