#include<iostream>
using namespace std;
// Constant function is such a function which cannot change the value of its caller object
class Demo
{
         public:
               int A;
               int B;
               const int C;
               const int D;

               Demo() : C(11), D(21)
               {
                         A = 0;
                         B = 0;
               }                   

               Demo(int i, int j, int k, int l) : C(k) , D(l)
               {
                      A = i;
                      B = j;
               }   

               void fun()
               {
                         A++;
                         B++;
                         //C++; NA
                         //D++; NA

               } 

               void gun() const
               {
                       /*A++;  NA
                         B++;  NA
                         C++;  NA
                         D++;  NA
                       */
               }
};
int main()
{ 
         Demo obj1(10,20,30,40);
         const Demo obj2(1,2,3,4);

         obj1.fun();
         obj1.gun();

         obj2.gun();
        // obj2.fun();    NA constant method can call only constant method....

         cout<<obj2.A<<"\n";
         cout<<obj2.B<<"\n";
         cout<<obj2.C<<"\n";
         cout<<obj2.D<<"\n";


       return 0;
}