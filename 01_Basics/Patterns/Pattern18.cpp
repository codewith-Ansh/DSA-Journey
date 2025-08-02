#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int k;
    for(int i=1; i<=n; i++){
        for(int j=n-i+1; j<=n; j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}