#include <iostream>
#include <string>
using namespace std;

class Employee{
    protected:
        string name;
    public:
        Employee(string name){
            this->name = name;
        }
        virtual double calculateSalary() const{
            return 0;
        }
        virtual void display() const{}
        virtual ~Employee(){
            delete[] this;
        }
};

class Professor:public Employee{
    private:
        double salary;
        double allowance;
    public:
        Professor(string name,double salary,double allowance):Employee(name){
            this->salary = salary;
            this->allowance = allowance;
        }
        void display() const override{
            cout<<"name: "<<name<<" base salary: "<<salary<<" allowance: "<<allowance<<endl;
        }
        double calculateSalary() const override{
            return salary+allowance;
        }
};

class Administrator:public Employee{
    private:
        double salary;
        double bonus;
    public:
        Administrator(string name,double salary,double bonus):Employee(name){
            this->salary = salary;
            this->bonus = bonus;
        }
        void display() const override{
            cout<<"name: "<<name<<" base salary: "<<salary<<" bonus: "<<bonus<<endl;
        }
        double calculateSalary() const override{
            return salary+bonus;
        }
};

int main(){
    Professor* p1 = new Professor("Alice", 50000, 10000);
    Administrator* a1 = new Administrator("Bob", 55000, 12000);
    Professor* p2 = new Professor("Carol", 60000, 15000);
    Employee* staff[3]{p1,a1,p2};
    double total = 0;
    for (int i =0; i<3;i++){
        staff[i]->display();
        cout<<staff[i]->calculateSalary();
    }
}