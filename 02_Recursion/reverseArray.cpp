#include <bits/stdc++.h>
using namespace std;

// void reverseArray(int l, int h,int arr[]){
//     if(l >= h){
//         return;
//     }
//     swap(arr[l], arr[h]);

//     reverseArray(l+1, h-1,arr);
// }

void reverseArray(int i, int arr[], int n){
    if(i >= n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    reverseArray(i+1, arr, n);
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // reverseArray(0, n-1,arr);
    reverseArray(0, arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}