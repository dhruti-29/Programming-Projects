#include <iostream>
using namespace std;

class student{

int id;
    string name;
string corse;

public :

student(){


cout<<"enter details"<<endl;

        cout<<"enter name : "<<endl;
        cin>>name;

        cout<<"enter id :"<<endl;
        cin>>id;

        cout<<"enter course :"<<endl;
        cin>>corse;
}
};
int main() {
    
    int n;

    cout<<"how many students : "<<endl;
    cin>>n;
//datatype *pointer = new datatype;
    student *s = new student[n];

    delete[] s;

    return 0;
}
