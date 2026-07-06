#include <iostream>
#include <string>
using namespace std;

int main(){
    // string name ="";
    // cout<<"enter name: ";
    // getline(cin,name);
    // string finName ="";
    // for (char ch:name){
    //     if (ch != ' '){
    //         finName += ch;
    //     }
    // }
    // cout<<finName.substr(0,3)<<finName.substr(finName.length()-3,finName.length());   

    string email = "";
    cout<<"enter email: ";
    cin>>email;
    if (email.find('@') != string::npos){
        cout<<"vaild email";
    }
    else{
        cout<<"invaild email";
    }
}