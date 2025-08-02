#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int l = 0, r = n - 1;
    int mid;
    bool found = false;

    while(l <= r){
        mid = (l+r)/2;
        
        if(arr[mid] == key){
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] > key){
            r = mid - 1;
        }
        else if(arr[mid] < key){
            l = mid + 1;
        }
    }
    if(!found) cout << "Element not found" << endl;
}