#include <iostream>
using namespace std;

class vehicles{

int num;
string oname;

public:
vehicles(){
cout<<"enter num : "<<endl;
cin>>num;

cout<<"enter oname : "<<endl;
cin>>oname;
}



};

class car : public vehicles{

double paisa = 200;

public :
void carp(){
    cout<<"car parking paisa :"<<paisa<<endl;
    
}

};

class bikes : public vehicles{

double paisa = 200;

public :
void bikesp(){
    cout<<"bikes parking paisa :"<<paisa<<endl;
    
}

};
int main() {
    
    car c;
    c.carp();

    bikes b;
    b.bikesp();
    return 0;
}
