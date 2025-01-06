#include <iostream>
using namespace std;
class vehicle{ 
       public:  
       int tyiers;  
       bool diki;
           };
 class car : public vehicle{ 
            public:
             bool two_seater;
             bool sports;
              int max_speed;
                void print(){
                cout<<"tyiers "<<tyiers<<endl<<"diki "<<diki<<endl;
                }
           
         };
    class toyota : public car{
            public:
            void print(){
                cout<<"two_seater "<<two_seater<<endl<<"sports "<<sports<<"max-speed "<<max_speed<<endl;
                cout<<"tyiers "<<tyiers<<endl<<"diki "<<diki<<endl;

            }


           };
           class fariri : public car{
            public:

           };
                       
   int main(){
       toyota supra;
       car mine;
       supra.tyiers=4;
        supra.diki=false;
       supra.two_seater=true;
       supra.sports=true;
       supra.max_speed=350;
       supra.print();
       

   }

            