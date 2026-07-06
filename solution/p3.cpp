#include <iostream>
using namespace std;

double area(double side){
    return side*side;
}


double area(double lenght,double width){
    return lenght*width;
}

double area(double radius,bool isCircle){
    double pi = 3.14;
    return pi*(radius*radius);
}

int main(){
    cout<<"square"<<endl;
    cout<<area(3.2)<<endl;
    cout<<area(4.0)<<endl;
    cout<<"rectangle"<<endl;
    cout<<area(3.2,4.4)<<endl;
    cout<<area(2.1,1.0)<<endl;
    cout<<"circle"<<endl;
    cout<<area(2.1,true)<<endl;
    cout<<area(2.1,false)<<endl;
}