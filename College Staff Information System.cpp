#include <iostream>
using namespace std;

class staff{

string name;
int id;

public:

void getdata(){

cout<<"Enter staff name: "<<endl;
cin>>name;

cout<<"Enter staff id: "<<endl;
cin>>id;
}

void showdata(){

cout<<"Name: "<<name<<endl;
cout<<"ID: "<<id<<endl;

}

};

class teacher : public staff{

string subject;

public:

void getteacher(){

getdata();

cout<<"Enter subject: "<<endl;
cin>>subject;

}

void showteacher(){

showdata();

cout<<"Subject: "<<subject<<endl;

}

};

class labassistant : public staff{

string equipment;

public:

void getlab(){

getdata();

cout<<"Enter equipment maintained: "<<endl;
cin>>equipment;

}

void showlab(){

showdata();

cout<<"Equipment: "<<equipment<<endl;

}

};

int main(){

teacher t;

cout<<"Enter teacher details"<<endl;
t.getteacher();

cout<<endl<<"Teacher Details"<<endl;
t.showteacher();


labassistant l;

cout<<endl<<"Enter lab assistant details"<<endl;
l.getlab();

cout<<endl<<"Lab Assistant Details"<<endl;
l.showlab();

return 0;
}