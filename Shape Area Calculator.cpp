#include <iostream>
using namespace std;

class shape{
public:
    double area;
};

class circle : public shape{

double r;

public:
void calculate(){

    cout<<"Enter radius of circle: "<<endl;
    cin>>r;

    area = 3.14 * r * r;

    cout<<"Area of circle is : "<<area<<endl;
}

};

class rectangle : public shape{

double l,b;

public:
void calculate(){

    cout<<"Enter length of rectangle: "<<endl;
    cin>>l;

    cout<<"Enter breadth of rectangle: "<<endl;
    cin>>b;

    area = l * b;

    cout<<"Area of rectangle is : "<<area<<endl;
}

};

int main(){

circle c;
c.calculate();

rectangle r;
r.calculate();

return 0;
}