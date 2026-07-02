#include <iostream>
using namespace std;
 
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>

void area(float* x,float* y,float* a){
    *a = (*x) * (*y);
}

int main() {
float l = 5.0, w = 4.0, r = 0.0;
area(&l,&w,&r);
std::cout<<r;
}