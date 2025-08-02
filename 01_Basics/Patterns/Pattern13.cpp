#include <bits/stdc++.h>
using namespace std;

void print(int n){
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}