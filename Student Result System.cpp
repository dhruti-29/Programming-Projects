#include <iostream>
using namespace std;

class student{

private :
    string name;
    int id;
    int marks[5];

    public:

    void getdata(){

        cout<<"enter details"<<endl;

        cout<<"enter name : "<<endl;
        cin>>name;

        cout<<"enter id :"<<endl;
        cin>>id;

        cout<<"enter marks :"<<endl;

        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    friend void avg(const student b1);

    };

    
     void avg(student b1){
        int sum = 0;
int a;
 for(int i=0;i<5;i++){
            sum = b1.marks[i] + sum;
        }

        a = sum/5;
cout<<"avg :"<<a<<endl;

    }

int main() {
    
    student s1;
    s1.getdata();
    avg(s1);
    return 0;
}
