#include <iostream>
#include <string>
using namespace std;

class Contacts{
    private:
        string Contacts[50];
        int numContacts = 0;
    public:
        void addContact(){
            if (numContacts+1 == 50){
                cout<<"too many contacts"<<endl;
            }
            else{
                string name;
                cout<<"enter name: ";
                cin>>name;
                Contacts[numContacts] = name;
                numContacts++;
            }
        }
        void getAllContacts(){
            int loops = 0;
            for (string name:Contacts){
                if (loops == numContacts){
                    break;
                }
                cout<<name<<endl;
                loops++;
            }
        }
        bool findContact(){
            string name;
            cout<<"enter name: ";
            cin>>name;
            for (string contact:Contacts){
                if (name == contact){
                    return true;
                }
            }
            return false;
        }
};

int main(){
    Contacts con = Contacts();
    int cmd = -1;
    while(cmd !=0){
        cout<<"enter comand"<<endl;
        cout<<"1. Add Contact"<<endl;
        cout<<"2. Display Contacts"<<endl;
        cout<<"3. Search Contact"<<endl;
        cout<<"0. Exit"<<endl;
        cin>>cmd;
        switch (cmd)
        {
        case 1:
            con.addContact();
            break;
        case 2:
            con.getAllContacts();
            break;
        case 3:
            cout<<con.findContact()<<endl;
            break;
        case 0:
            break;
        default:
            cout<<"invaid comand";
            break;
        }
    }
}