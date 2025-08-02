#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    int HCF;
    cin>>n1>>n2;
    int n = (n1>n2)?n2:n1;
    if(n2%n1 == 0 || n1%n2 == 0){
        if(n1>n2)
            cout<<n2<<endl;
        else
            cout<<n1<<endl;
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                HCF = i;
            }
        }
        cout << HCF << endl;
    }
}