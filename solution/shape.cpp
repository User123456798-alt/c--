#include <iostream>
using namespace std;

class Shape{
    public:
        virtual double getArea(){
            return 0;
        };
        virtual ~Shape(){
            delete[] this;
        };
};

class Circle:public Shape{
    private:
        int radius;
    public:
        Circle(int radius){
            this->radius = radius;
        }
        double getArea() override{
            return radius*2*3.14159;
        }
};

class Rectangle:public Shape{
    private:
        int length;
        int width;
    public:
        Rectangle(int length,int width){
            this->length = length;
            this->width = width;
        }
        double getArea() override{
            return length*width;
        }
};

class PayableEmployee{
    public:
        virtual double calculatePay(){return 0;}
        virtual ~PayableEmployee(){
            delete[] this;
        };
};

class HourlyEmployee: public PayableEmployee{
    private:
        int hoursWorked;
        double hourlyRate;
    public:
        HourlyEmployee(int hoursWorked,double hourlyRate){
            this->hoursWorked = hoursWorked;
            this->hourlyRate = hourlyRate;
        }
        double calculatePay() override{
            return hoursWorked*hourlyRate;
        }
};

class SalariedEmployee: public PayableEmployee{
    private:
        double annualSalary;
    public:
        SalariedEmployee(double annualSalary){
            this->annualSalary = annualSalary;
        }
        double calculatePay() override{
            return annualSalary/12;
        }
};

int main(){
    // Circle* c1 = new Circle(2);
    // Rectangle* r1 = new Rectangle(2,4);
    // Rectangle* r2 = new Rectangle(10,7);
    // Shape* shapes[3] ={c1,r1,r2};
    // for (Shape* s:shapes){
    //     cout<<s->getArea()<<endl;
    // }
    PayableEmployee* p1 = new HourlyEmployee(100,16.25);
    PayableEmployee* p2 = new SalariedEmployee(50000.00);
    cout<<p1->calculatePay()<<endl;
    cout<<p2->calculatePay()<<endl;
}