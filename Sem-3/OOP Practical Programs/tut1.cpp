#include <iostream>

using namespace std;

class complex {
    public:
    float real;
    float img;

complex (){
    real=0;
    img=0;
}

complex (float a,float b){
    real=a;
    img=b;

}

void print(){
    cout<< real << " + "<<img<<"i" <<endl;
}
complex operator+(complex&  other ){
    complex temp;
    temp.real=real + other.real;
    temp.img=img + other.img;

    return temp;
}

complex operator*(complex&  other ){
    complex temp;
    temp.real=real * other.real;
    temp.img=img * other.img;

    return temp;
}

};

ostream& operator<<(ostream& COUT, complex c){
    COUT << c.real << " + "<<c.img<<"i" <<endl;
}

istream& operator>>(istream& CIN, complex c){
    CIN >>c.real>>c.img;
}

int main(){
    complex z1(1,1);
    complex z2(2,6);

    z1.print();
    z2.print();

    complex z3=z1+z2;
    complex z4=z1*z2;

    cout<<"sum is :"<<z3;
    cout<<"Multiplication is :"<<z4;

    return 0;
}