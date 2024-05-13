#include<iostream>
using namespace std;

int strlenX(char *p)
{
      int icnt = 0;

      while(*p != '\0')
      {
            icnt++;
            p++;
      }
      return icnt;

}
int main()
{
      char Arr[10];

      int iRet = 0;

      cout<<"Enter Your First Name..."<<"\n";
      cin>>Arr;

      iRet = strlenX(Arr);

      cout<<"Length of Your Name..."<<iRet<<"\n";

      return 0;
}