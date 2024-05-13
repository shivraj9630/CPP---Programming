#include<iostream>
using namespace std;

class Demo
{
        public:
              int A;
              int B;
              const int C;
              const int D;

              Demo() : C(11),D(21)
              {
                  A = 0;
                  B = 0;    
              }

              Demo(int i, int j, int k, int l) : C(k) , D(l)
              {
                  A = i;
                  B = j;
              }
};

int main()
{
     Demo obj1;
     Demo obj2(10,20,30,40);
     Demo obj3(1,2,3,4);

     cout<<obj1.A<<"\n";
     cout<<obj1.B<<"\n";
     cout<<obj1.C<<"\n";
     cout<<obj1.D<<"\n";

     cout<<obj2.A<<"\n";
     cout<<obj2.B<<"\n";
     cout<<obj2.C<<"\n";
     cout<<obj2.D<<"\n";

     cout<<obj3.A<<"\n";
     cout<<obj3.B<<"\n";
     cout<<obj3.C<<"\n";
     cout<<obj3.D<<"\n";


     return 0;
}