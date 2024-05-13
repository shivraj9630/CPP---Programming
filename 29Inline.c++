#include<iostream>
using namespace std;

class Demo
{
          public:
                 inline void Fun()
                 {
                         cout<<"Inside Fun..."<<"\n";
                 }

};
int main()
{
        Demo obj;

        obj.Fun();
        
        return 0;
}