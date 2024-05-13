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
                        cout<<"Inside Demo Constructor...."<<"\n";

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

class Hello : public Demo
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

int main()
{
       Demo dobj;
       Hello hobj;

       cout<<"Size of Demo..."<<sizeof(dobj)<<"\n";
       cout<<"Size of Hello..."<<sizeof(hobj)<<"\n";

       hobj.fun();
       hobj.gun();

       cout<<hobj.A<<"\n";
       cout<<hobj.B<<"\n";
       cout<<hobj.X<<"\n";
       cout<<hobj.Y<<"\n";

       return 0;
}