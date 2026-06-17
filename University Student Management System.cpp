#include <iostream>
using namespace std;

class student{

string name;
int rollnum;
string department;

public:
student(){
cout<<"enter details"<<endl;
cout<<"enter name :"<<endl;
cin>>name;

cout<<"enter roll no :"<<endl;
cin>>rollnum;

cout<"enter department :"<<endl;
cin>>department;

}
};

class ug : public student{

    int marks[5];

    public :
    void getmark(){
for(int i=0;i<5;i++){
    cin>>marks[i];
}
 }

};

class pg : public student{

    int marks[3];

    public :
    void getmark(){
for(int i=0;i<3;i++){
    cin>>marks[i];
}
 }

};

int main() {
   student  
    return 0;
}
