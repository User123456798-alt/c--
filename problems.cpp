void main{
int x;
int y;
cout<<"enter x";
cin >> x;
cout<<"enter y";
cin >> y;
cout<< add(x,y)<<","<<subtract(x,y)<<","<<multiply(x,y)<<","<<divide(x,y);
}

int add(int x,int y){
return x+y;
}
int subtract(int x,int y){
return x-y;
}
int multiply(int x,int y){
return x*y;
}
int divide(int x,int y){
return x/y;
}

void main{
int x;
int y;
cout<<"enter x";
cin >> x;
cout<<"enter y";
cin >> y;
cout<< x+y<<","<<x-y<<","<<x*y<<","<<x/y;
}

void main{
int x;
int y;
cout<<"enter length";
cin >> x;
cout<<"enter width";
cin >> y;
cout<<"area: "<<x*y<<" perimeter: "<<2*x+2*y
}

void main{
int x;
int y;
int mode;
cout<< "enter mode \n"
	"1.add \n"
	"2.subtract \n"
	"3.multiply \n"
	"4.divide \n";
cin >> mode;
cout<<"enter x";
cin >> x;
cout<<"enter y";
cin >> y;
switch(mode){
	case 1:
		cout<<x+y;
		break;
	case 2:
		cout<<x-y;
		break;
	case 3:
		cout<<x*y;
		break;
	case 4:
		cout<<x/y;
		break;
	case deafault:
		cout<<"invalid command"
		break;
}
}

void main{
int grade;
cout<<"enter grade";
cin>>grade;
switch(grade){
	case >=90:
		cout<<"A";
		break;
	case >=75:
		cout<<"B";
		break;
	case >=60:
		cout<<"C";
		break;
	case >=40:
		cout<<"D";
		break;
	case <40:
		cout<<"F";
		break;
}
}

void main{
int grade;
cout<<"enter grade";
cin>>grade;
if(grade>=90){
cout<<"A";
}
else if(grade >=75){
cout<<"B";
}
else if(grade >=60){
cout<<"C";
}
else if(grade >=40){
cout<<"D";
}
else{
cout<<"F";
}
}

void main{
string days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int day;
cout<<"enter day";
cin>>day;
if (day >7 ||day < 1){
cout<<"invalid day";
}
else{
cout<<days[day-1];
}
}


void main{
int year ;
cout<<"enter year";
cin >> year;
if (year %100 == 0){
	if (year %400 == 0){
	cout<<"leap year";
	}
	else{
	cout<<"normal";
	}
else{
	if (year %4 == 0){
	cout<<"leap year";
	}
	else{
	cout<<"normal";
	}
}
}
}

void main{
int year ;
cout<<"enter year";
cin >> year;
if ((year % 100 != 0 && year%4 == 0)||year %400 == 0){
cout<<"leap year";
}
else{
cout<<"normal";
}
}

void main{
int x;
cout<<"enter number";
cin>>x;
for(int i = 1; i< 11;i++){
cout<<"("<<x<<"*"<<i<<"="<x*i<<")";
}
}

void main{
int x;
cout<<"enter number";
cin>>x;
int i = 1
while(i < 11){
cout<<"("<<x<<"*"<<i<<"="<<x*i<<")";
i++;
}
}

void main{
int num = 40;
int x = 0;
while (x != num){
	cout<<"enter guess";
	cin >> x;
	if (x>num){
	cout<<"lower";
	}
	else if (x<num){
	cout<<"higher";
	}
}
cout<<"correct";
}