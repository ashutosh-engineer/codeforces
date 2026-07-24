#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    ll sum=0;
    ll maxbooks=0;
    int left=0;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int right=0; right<n; right++){
        sum+=arr[right];

        while(sum > k){
            sum-=arr[left];
            left++;//Window updated;
        }

        maxbooks=max(maxbooks , right-left+1);
    }

    cout<<maxbooks;

    return 0;
}