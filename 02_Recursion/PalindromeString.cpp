#include <bits/stdc++.h>
using namespace std;

void palindrome(int i, string &str, int n){
    if(i >= n/2)
        return;
    swap(str[i], str[n-i-1]);
    palindrome(i+1, str, n);
}

bool palindrome2(int i, string &str, int n){
    if(i >= n)
        return true;
    if(str[i] != str[n-i-1])
        return false;   

    return palindrome2(i+1, str, n);
}

int main(){
    string str;
    getline(cin, str);

    int n = str.size();
    string temp = str;
    palindrome(0, str, n);

    if(temp == str)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

    bool checkPalindrome = palindrome2(0, str, n);
    if(checkPalindrome)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}
