#include<iostream>
using namespace std;

class Hello
{ 
        public:
            void gun();
};

class PPA
{
         public:
             void sun();
             void run();
};

class Demo
{
          public:
               int A;
          private:
               int B;
          protected:
               int C;

               Demo(int i, int j, int k)
               {
                         A = i;
                         B = j;
                         C = k;
               }

               friend void fun();
               friend void Hello::gun();
               friend class PPA;

};

void Hello :: gun()
{
     Demo obj(11,21,51);
     cout<<"Value of A:"<<obj.A<<"\n";
     cout<<"Value of B:"<<obj.B<<"\n";
     cout<<"Value of C:"<<obj.C<<"\n";
}

void PPA :: sun()
{
     Demo obj(11,21,51);
     cout<<"Value of A:"<<obj.A<<"\n";
     cout<<"Value of B:"<<obj.B<<"\n";
     cout<<"Value of C:"<<obj.C<<"\n";
}

void PPA :: run ()
{
     Demo obj(11,21,51);
     cout<<"Value of A:"<<obj.A<<"\n";
     cout<<"Value of B:"<<obj.B<<"\n";
     cout<<"Value of C:"<<obj.C<<"\n";
}

void fun()
{
     Demo obj(11,21,51);
     cout<<"Value of A:"<<obj.A<<"\n";
     cout<<"Value of B:"<<obj.B<<"\n";
     cout<<"Value of C:"<<obj.C<<"\n";
}

int main()
{
        fun();
        
        Hello hobj;
        hobj.gun();

        PPA pobj;
        pobj.sun();
        pobj.run();

       return 0;
}