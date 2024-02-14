#include <iostream>
#include <map>

using namespace std;

int main(){
    map <string ,int >state;

    state.insert(pair<string,int>("Maharashtra",200100));
    state.insert(pair<string,int>("Delhi",102030));
    state.insert(pair<string,int>("Assam",456789));
    state.insert(pair<string,int>("Haryana",987654));

    string search ;
    cout<< " Enter the name of a state : ";
    cin>> search;
    if (state[search]!=0)
    
    {
        cout<< "\n The population of " <<search << " is : "<<state[search];
    }else{
        cout<<"\nState not found ";
    }
    return 0;   
}