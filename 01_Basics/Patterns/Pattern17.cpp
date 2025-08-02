#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        int k = 1;
        // Print spaces
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        // Print character pyramid
        int totalChars = 2*i - 1;
        int midpoint = (totalChars / 2) + 1;

        for(int j = 1; j <= totalChars; j++){
            cout << char(64 + k) << " ";
            if(j < midpoint) k++;
            else k--;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print(n);
}
