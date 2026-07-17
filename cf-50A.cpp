#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int m,n;
    cin>>m>>n;
    
    int squares=m*n;          // total squares
    int pizza=abs(squares/2); // integer division
    
    cout<<pizza;
    
    return 0;
}
