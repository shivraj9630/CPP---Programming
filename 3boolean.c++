#include<iostream>
using namespace std;

bool CheckEven(int No)
{
   if((No % 2) == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   int value = 0;
   bool bRet = false;

   cout<<"Enter Number:\n";
   cin>>value;

   bRet = CheckEven(value);

   if(bRet == true)
   {
           cout<<"It is Even number...\n";
   }
   else
   {
           cout<<"It is Odd number...\n";
   }

   return 0;
}