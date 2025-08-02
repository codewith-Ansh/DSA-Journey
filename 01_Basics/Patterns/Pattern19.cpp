#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=1; i<=n; i++){
        // star
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }

        // spaces
        for(int j=1; j<=2*i - 2; j++){
            cout<<"  ";
        }

        // star
        for(int j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        // star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        // spaces
        for(int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }

        // star
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}