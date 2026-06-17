#include <iostream>
using namespace std;

class employee{
int id;
string name;
string department;

public:
inline static int count=0;
employee(){
count++;

cout<<"Enter employee details"<<endl;

cout<<"Enter name : "<<endl;
cin>>name;

cin.ignore(); //when first we declare int ya any num and then we use strings 

cout<<"Enter id : "<<endl;
cin>>id;

cout<<"enter department :"<<endl;
cin>>department;

cout<<"number is : "<<count;
}

  


};
int main() {
   
    employee e1,e2,e3;
   
    return 0;
}
