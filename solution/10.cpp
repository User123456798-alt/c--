#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
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

void names(string names[4]){
    ofstream file("names.txt");
    if (file.is_open()){
        for (int i = 0; i<4 ; i++){
            file<<names[i]<<endl;
        }
        file.close();
    }
    else{
        cout<<"file not found"<<endl;
    }
}

void read(){
        ifstream file("names.txt");
    if (file.is_open()){
        string line ="";
        double total = 0.0;
        while(getline(file,line)){
            string amount = line.substr(line.find_last_of(' '),line.length()-1);
            if (amount.find('.') != string::npos){
                total += stod(amount);
            }
        }
        file.close();
        ofstream dataF("data.txt");
        if (dataF.is_open()){
            dataF<<total;
            dataF.close();
        }
    }
    else{
        cout<<"file not found"<<endl;
    }
}

int main(){
//     MotorCycle car = MotorCycle("a",10,true);
//     car.displayInfo();
// try{
//     processOrder(1,0);
//     processOrder(0,10);
//     processOrder(10,-1);
// }catch(invalid_argument& e){
//     cout<<e.what();
// }catch(runtime_error& e){
//     cout<<e.what();
// }
    // string arr[4] = {"alex","bob","charlote","charels"};
    // names(arr);
    read();
    return 0;
}

