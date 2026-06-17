#include <iostream>
using namespace std;

class food{
int price;
int quantity;
int charge;
int pp,pb;
public:

void f(int p ,int q){
price = p;
quantity = q;

   pp =   price * quantity;
   cout<<"total price for pizzza : "<<pp<<endl;

}
void f(int p,int q,int c){
price = p;
quantity = q;
charge = c;


pb =  (price * quantity )+ charge;
cout<<"total price burger:"<<pb<<endl;


}



};
int main() {
    
food p,b;
p.f(12,2);
b.f(23,45,5);

    return 0;
}
