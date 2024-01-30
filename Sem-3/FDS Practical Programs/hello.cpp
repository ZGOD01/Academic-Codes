#include<iostream>

using namespace std;

class stack{
public:
    static const int size = 100;
    int top =-1;
    int array[size];

    void push(int x){
        if(top == size-1){
            cout<<"stack overflow !! ";
            return ;
        }
        array[++top] = x;

    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow !!";
            return ;
        }

        --top;
    } 


};

int main(){

    stack s;

    s.push(12);
    s.push(1);
    s.push(2);
    s.push(34);
    s.push(56);
    s.push(45);
    s.push(67);

    return 0;
}