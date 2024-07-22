#include<iostream>

using namespace std;

int sumarr(int arr[], int size) {
    int sum = 0; 
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter length of array: " << endl;
    cin >> size;

    int arr[1000];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Sum of array: " << sumarr(arr, size) << endl;

    return 0;
}
