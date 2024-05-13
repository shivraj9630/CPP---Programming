#include<iostream>
using namespace std;

class Demo
{
          public:
                int A;
                int B;
                static int X;
                static int Y;

                Demo()
                {
                         A = 10;
                         B = 20;
                }       

                int Fun()
                {
                    cout<<"Inside Non Static function fun..."<<"\n";
                    cout<<"Value of A : "<<this->A<<"\n";
                    cout<<"Value of B : "<<this->B<<"\n";
                    cout<<"Value of X : "<<X<<"\n";
                    cout<<"Value of Y : "<<Y<<"\n";

                }

                static int gun()
                {
                    cout<<"Inside Static Function gun..."<<"\n";
                    cout<<"Value of X :"<<X<<"\n";
                    cout<<"Value of Y :"<<Y<<"\n";
                }
};

int Demo :: X = 11;
int Demo :: Y = 21;

int main()
{
         Demo::gun();
         Demo obj;

         obj.Fun();
         obj.gun();      

        return 0;
}