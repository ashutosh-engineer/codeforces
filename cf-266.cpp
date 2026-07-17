#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    
    string s;
    cin>>s;
    int counter=0;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            counter++;
        }
    }
    
    cout<<counter;

    return 0;
}