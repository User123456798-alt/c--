#include <iostream>
#include <string>
using namespace std;

class User{
    public:
        bool login(){
            string username;
            int password;
            cout<<"enter username: ";
            cin>>username;
            cout<<"enter password: ";
            cin>>password;
            return check(username,password);
        }
    protected:
        User(string username,int password){
            this->usern = username;
            this->password = password;
        }
        bool check(string username,int password){
            if (this->usern == username && this->password == password){
                return true;
            }
            return false;
        }
    private:
        string usern;
        int password;
};