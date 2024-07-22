#include<iostream>
using namespace std;

// Function to find the maximum value in an array
int getMaxMin(int num[], int n) {
    int maxi = INT_MIN;
    int mini=INT_MAX;
    for (int i = 0; i < n; i++) {
        maxi=max(maxi,num[i]);
        mini=min(mini,num[i]);
    }

    return maxi;
    return mini;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    // Input array elements
    for (int j = 0; j < size; j++) {
        cin >> num[j];
    }

    // Call the getMax function to find and print the maximum value
    cout << "Maximum and Minimum value is " << getMaxMin(num[j],size) << endl;
    return 0;
}
