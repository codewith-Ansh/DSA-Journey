#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // int hash[26] = {0}; // we can also take 256 here as total number of ASCII characters are 256 and it will work finely without doing any + or - between the values

    int hash[256] = {0};

    for(int i=0; i<s.size(); i++){
        // hash[s[i] - 'a']++;
        hash[s[i]]++;
    }

    int q;
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        // cout << hash[c - 'a'] << endl;
        cout << hash[c] << endl;
    }
    return 0;
}