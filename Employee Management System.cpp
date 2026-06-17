#include <iostream>
using namespace std;

class employee{

string name;
int id;

public:
double salary = 10000;

employee(){

cout<<"Enter employee details"<<endl;

cout<<"Enter name : "<<endl;
cin>>name;

cout<<"Enter id : "<<endl;
cin>>id;

}
};

class managers : public employee {

double b;

public:

void bonus(){

cout<<"Enter bonus for manager : "<<endl;
cin>>b;

salary = salary + b;

cout<<"Total salary of manager is : "<<salary<<endl;

}

};

class developers : public employee{

int time;

public:

void payment(){

cout<<"Enter extra working hours : "<<endl;
cin>>time;

salary = salary + (time * 500);

cout<<"Total salary of developer is : "<<salary<<endl;

}

};

int main(){

managers m;
m.bonus();

developers d;
d.payment();

return 0;
}