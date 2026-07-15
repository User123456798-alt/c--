#include <iostream>
#include <string>
using namespace std;

// class Vehicle{
//     public:
//         string brand;
//         int topSpeed;
//         void displayInfo(){
//             cout<<"brand: "<<brand<<" top speed: "<<topSpeed;
//         }
// };
// class MotorCycle:Vehicle{
//     public:
//         bool hasSidecar;
//         MotorCycle(string brand,int topSpeed,bool hasSidecar){
//             this->brand = brand;
//             this->topSpeed = topSpeed;
//             this->hasSidecar = hasSidecar;
//         }
//         void displayInfo(){
//             cout<<"brand: "<<brand<<" top speed: "<<topSpeed;
//             if (hasSidecar){
//                 cout<<" has a side car"<<endl;
//             }
//             else{
//                 cout<<" has no side car"<<endl;
//             }
//         }
// };

void validAge(int age){
    if (age <0){
        throw invalid_argument("age can't be negative");
    }
}

void processOrder(int quantity,double price){
    if (quantity < 1){
        throw invalid_argument("quantity below 1");
    }
    if (price<0){
        throw runtime_error("price below 0");
    }
}

int main(){
//     MotorCycle car = MotorCycle("a",10,true);
//     car.displayInfo();
try{
    processOrder(1,0);
    processOrder(0,10);
    processOrder(10,-1);
}catch(invalid_argument& e){
    cout<<e.what();
}catch(runtime_error& e){
    cout<<e.what();
}
return 0;
}

