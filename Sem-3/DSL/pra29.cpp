#include <iostream>
using namespace std;

class stack
{
public:
    static const  int size = 100; 
    int top = -1;               
    int array[size];

    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow !!";
            return;
        }

        array[++top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return -1; 
        }

        return array[top--];
    }

    int display(){
        if(top==-1){
            cout<<"Stack is Empty ";
        }

        cout<<"Stack Contains :";
        for(int i=0;i<=top ;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    stack s;
    
    string user_input;

    cout<<"Enter a string :";
    cin>>user_input;

    for(int i=0;i< user_input.size();i++)
    {
        s.push(user_input[i]);
    }

    s.display();

    return 0;
}
