#include<iostream>
using namespace std;

// Function to find the maximum value in an array
int getMax(int num[], int n) {
    int maxi = INT_MIN;  // Initialize max to the smallest possible integer value

    for (int i = 0; i < n; i++) {
        //maxi=max(maxi,num[i])
        if (num[i] > maxi) {
            maxi = num[i];  // Update max if the current element is greater
        }
    }

    return maxi;
}

int getMin(int num[],int n){
    int mini=INT_MAX;

    for(int i=0; i<n;i++){
        //mini=min(mini,num[i])
        if(num[i]>mini);{
            mini=num[i];
        }
    }
    return mini;
}


int main() {
    int size;
    cin >> size;

    int num[100];

    // Input array elements
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    // Call the getMax function to find and print the maximum value
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout<<"minmum value is " <<getMin(num,size)<<endl;
    return 0;
}
