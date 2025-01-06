#include <iostream>
using namespace std;
class A{ 
       public:    
     int a;
};
class B : public A{
    public:
   int b;
};
class F : public B{
   public:
  int f;
  void print(){
    cout<<"f "<<f<<endl<<"b "<<b<<endl<<"a "<<a<<endl;
  }

};
class C : public A{
    public:
  int c;

};
class D : public C{
    public:
  int d;

};
class E : public C{
    public:
  int e;
   void print(){
    cout<<"e "<<e<<endl<<"c "<<c<<"a "<<a<<endl;
  }

};

   int main(){
    A aa;
    B bb;
    C cc;
    D dd;
    E ee;
    F ff;
      ff.a=1;
      ff.b=2;
      ff.f=6;
     ff.print();
     ee.a=1;
     ee.c=3;
     ee.e=5;
     ee.print();
   }

            