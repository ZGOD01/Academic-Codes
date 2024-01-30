#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class items {
private:
    string name;
    int cost;
    int quantity;

public:
    int code;
    items(int a, string b, int c, int d) {
        code = a;
        name = b;
        cost = c;
        quantity = d;
    }

    void display() {
        cout << "Item code : " << code << " | Name = " << name << " | Cost = " << cost;
        cout << " | Quantity = " << quantity << endl;
    }

};

bool compareItems(const items& a, const items& b) {
    return a.code < b.code;
}

int main() {

    vector<items> v1;
    int choice;
    while (1) {
        cout << "Enter 1-Inserting Item | 2-Print all the items | 3- search an Item | 4-sort an item | 0-Exit " << endl;
        cin >> choice; // Add this line to get the user choice

        if (choice == 1) {
            string name;
            int cost, quantity, code;
            cout << "Enter Item Details : Code | Name | Cost | Quantity :  " << endl;
            cin >> code >> name >> cost >> quantity;
            items item(code, name, cost, quantity);
            v1.push_back(item);
        }
        else if (choice == 2) {
            for (int i = 0; i < v1.size(); i++) {
                v1[i].display();
            }
        }
        else if (choice == 3) {
            int c;
            int flag = 0;
            cout << "Enter the item code to be searched :" << endl;
            cin >> c;
            for (int i = 0; i < v1.size(); i++) {
                if (v1[i].code == c) {
                    v1[i].display();
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "Item not found ";
        }
        else if (choice == 4) {
            // Add your code for sorting here
            sort(v1.begin(), v1.end(), compareItems);
             
        }
        else if (choice == 0) {
            cout << "Exited" << endl;
            break; // Add this line to exit the loop when the user chooses 0
        }
    }
    return 0;
}

