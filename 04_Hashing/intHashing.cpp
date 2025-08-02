#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int hash[15] = {0}; // assuming that the max element here is 13 and initializing all them as zero
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q; // q for queries (for checking q numbers)
    cin >> q;

    while(q--){
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }
    return 0;
}