#include <iostream>
using namespace std;
class vehicle{ 
       public:    
       string color;
           int max_speed;
             void print(){
                cout<<"max_speed "<<max_speed<<endl;
             }
           };
           class car : public vehicle{ 
            public:   
            int num_gears;
                    int getnum_gears(){
                        return num_gears;
                    }
                    void setnum_gears(int num_gears){
                        this->num_gears=num_gears;
                    }
                      int getmax_speed(){
                        return max_speed;
                    }
                    void setmax_speed(int max_speed){
                        this->max_speed=max_speed;
                    }

            void print(){
  cout<<"num_gears "<<num_gears<<endl;
          cout<<"max_speed "<<max_speed<<endl;
            }
            };
            class toyota : public car{  
                public:
                  bool is_foldable;
                      void print(){
  cout<<"num_gears "<<num_gears<<endl;
          cout<<"max_speed "<<max_speed<<endl;
                      }
                     };
   int main(){
    vehicle v1;
   car bmw;
   toyota supra;
   supra.setnum_gears(6);
   supra.setmax_speed(200);
    supra.print();

   }

            