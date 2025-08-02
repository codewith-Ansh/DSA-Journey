#include <bits/stdc++.h>
using namespace std;

void printName(int n){
    if(n==0){
        return;
    }
    cout<<"Ansh Darji"<<endl;
    printName(--n);
}

int main(){
    int n;
    cin>>n;

    printName(n);
    return 0;
}