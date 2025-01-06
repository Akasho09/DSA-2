#include<iostream>
using namespace std;
class A{
    public:
    int a,b,c;
    A(int a,int b){
        this->a=a;
        this->b=b;
        cout<<"a "<<a<<endl<<"b "<<b<<endl;

    }
    A(int c ){
        this->c=c;
        cout<<"c "<<c<<endl;
    }
};
int main(){
    A(1,2);
    A(3);
}