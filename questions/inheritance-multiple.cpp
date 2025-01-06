#include <iostream>
using namespace std;
class vehicle{ 
       public:    
       string color;
           int max_speed;
           };
 class business{
             public:
             int cost;
           };
           class car : public vehicle, public business{ 
            public:   
            int num_gears;
                    int getcost(){
                        return cost;
                    }
                    void setcost(int cost){
                        this->cost=cost;
                    }
                      int getmax_speed(){
                        return max_speed;
                    }
                    void setmax_speed(int max_speed){
                        this->max_speed=max_speed;
                    }
                    void print(){
                        cout<<"max_speed "<<max_speed<<endl<<"cost "<<cost<<endl;
                    }
           };
   int main(){
   car supra;
   supra.max_speed=350;
   supra.cost=500000000;
   supra.print();

   }

            