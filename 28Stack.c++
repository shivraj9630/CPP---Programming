#include<iostream>
using namespace std;

int Add(int No1, int No2)
{
     int Ans = 0;
     Ans = No1 + No2;
     return Ans;
}

int main()
{
       int A = 10;
       int B = 20;

       int iRet = 0;

       iRet = Add(A,B);

       cout<<"Additon is:"<<iRet<<"\n";
       
       return 0;
}