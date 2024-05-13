#include<iostream>
using namespace std;

class Demo
{
        public:

        int Addition(int No1, int No2)
        {
            cout<<"Addition of 2 int..."<<"\n";
            return No1 + No2;
        }

        int Addition(int No1, int No2, int No3)
        {
            cout<<"Addition of 3 int..."<<"\n";
            return No1 + No2 + No3;
        }

        int Addition(int No1, int No2, int No3, int No4)
        {
            cout<<"Addition of 4 int..."<<"\n";
            return No1 + No2 + No3 + No4;
        }

        int Addition(float No1, float No2)
        {
            cout<<"Addition of 2 float..."<<"\n";
            return No1 + No2;
        }

        int Addition(double No1, double No2)
        {
            cout<<"Addition of 2 double..."<<"\n";
            return No1 + No2;
        }
};

int main()
{
     Demo obj;

     int iRet = obj.Addition(10,20);
     cout<<"Addition is:"<<iRet<<"\n";

     iRet = obj.Addition(10,20,30);
     cout<<"Addition is:"<<iRet<<"\n";

     iRet = obj.Addition(10,20,30,40);
     cout<<"Addition is:"<<iRet<<"\n";

     float fRet = obj.Addition(10.5f,20.7f);
     cout<<"Addition is:"<<fRet<<"\n";

     double dRet = obj.Addition(90.50,80.70);
     cout<<"Addition is:"<<dRet<<"\n";

    

    return 0;
}

//changing Datatype 
 void fun(int A, int B);
 void fun(float A, float B);
