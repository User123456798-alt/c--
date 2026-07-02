#include <iostream>
using namespace std;

void swap(int& a,int& b){
    int x= a;
    a = b;
    b = x;
}

void swapPointer(int* a,int* b){
    int x= *a;
    *a = *b;
    *b = x;
}

void diamond(int x){
    for (int i = 0; i < x;i++){
        for (int j = 0; j < (x*2);j++){
            if(j >= (x - i) && j <= (x + i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i = x-1; i > 0;i--){
        for (int j = 0; j < (x*2) -1;j++){
            if(j >= (x - i+1) && j <= (x + i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void nums(int x){
    for (int i = 0; i <(x*2) - 1;i++){
        for (int j= i;j<x;j++){
            cout<<j+1;
        }
        for (int j= x;j<i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

int main(){
    // int x= 3;
    // int y =4;
    // cout<<"x: " <<x<<" y: "<<y<<endl;
    // swapPointer(&x,&y);
    // cout<<"x: " <<x<<" y: "<<y<<endl;
    // diamond(6);
    nums(3);
}