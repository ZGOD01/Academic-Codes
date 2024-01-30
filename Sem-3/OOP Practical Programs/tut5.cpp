#include <iostream>

using namespace std;

template <typename T>

void selection(T arr[], int n) {
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        T temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "Array after sorting : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " , " ;
    }
    cout << endl ;
}   

int main() {

    int n;
    cout << "Enter the array length: " << endl;
    cin >> n ;

    // Declare an array of floats       
    float arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Call the selection sort function 
    selection(arr, n);

    return 0;

}

