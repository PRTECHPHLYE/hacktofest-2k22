// An iterative binary search 

#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int a)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == a)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < a)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    return -1; 
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];  // Intialising an array
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
    int a = 10;
    int result = binarySearch(arr, 0, n - 1, a);

    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result; // using the ternary operator
    return 0;
}