#include<iostream>

namespace Shivraj
{
  class Demo
  {
         public:
              int A;
              int B;

              Demo(int i = 10, int j = 20)
              {
                         A = i;
                         B = j;
              }


  };

}

namespace Shiv
{
    class Demo
    {
            public:
                 int A;
    };
}
 //using namespace shivraj
int main()
{
        Shivraj :: Demo obj;

        Shiv :: Demo obj1;

       std :: cout<<obj.B<<"\n";
       std :: cout<<"Inside main..."<<"\n";

        return 0;

}