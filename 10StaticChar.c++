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

};

int Demo :: X = 11;
int Demo :: Y = 21;

int main()
{
        cout<<"Value of X:"<<Demo :: X<<"\n";
        cout<<"Value of Y:"<<Demo :: Y <<"\n";

        Demo obj1;
        Demo obj2;

         cout<<"Value of A from obj1:"<<obj1.A<<"\n";
         cout<<"Value of A from obj1:"<<obj2.A<<"\n";

         obj1.A++;
         obj2.A++;

         cout<<"Value of A from obj1:"<<obj1.A<<"\n";
         cout<<"Value of A from obj1:"<<obj2.A<<"\n";

         cout<<"Value of X:"<<obj1.X<<"\n";
         cout<<"Value of Y:"<<obj2.Y<<"\n";

         cout<<"Size of object from class:"<<sizeof(obj1)<<"\n";

 
      
      return 0;
}