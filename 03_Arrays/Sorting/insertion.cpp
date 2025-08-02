// #include <bits/stdc++.h>
// using namespace std;

// void insertionSort(int arr[], int n){
//     int j;
//     for(int i=0; i<=n-1; i++){
//         j = i;
//         while(j > 0 && arr[j-1] > arr[j]){
//             // swap(arr[j], arr[j-1]);
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
            
//             j--;
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     int a[n];

//     for(int i=0; i<n; i++){
//         cin >> a[i];
//     }
//     insertionSort(a, n);
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        int j = i;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}