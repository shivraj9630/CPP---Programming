#include<iostream>
using namespace std;

float Area(float Radius, float PI = 3.14)
{
        float Ans = 0.0f; 

        Ans = PI * Radius * Radius;

        return Ans;
}

int main()
{
        float R = 0.0;
        float fRet = 0.0;

        cout<<"Enter the Radius..."<<"\n";
        cin>>R;

        fRet = Area(R);
        cout<<"Area of circle..."<<fRet<<"\n";

        fRet = Area(R,10.10);
        cout<<"Area of Circle..."<<fRet<<"\n";
        
       return 0;
}