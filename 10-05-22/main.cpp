#include "bits/stdc++.h"
using namespace std;
#define REP(i, l, r, s) for (i = l; i < r; i += s)
#define REPR(i, r, l, s) for (i = r; i >= l; i -= s)
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve();


    
int main()
{
    fastio;

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;

    cin >> t;
    int cc = 1;
    
    
    
    
    while (cc <= t)
    {   
        // cout<<"Case #"<<cc<<": ";
        solve();
        cout << "\n";
        cc++;
    }


    return 0;
}


void solve()
{   int i,j;
    int n;
    
    cin>>n;

    vector<int> arr(n);


    REP(i, 0, n, 1) cin>>arr[i];
    

    //  the key thing is to figure out which side to delete from
    //  in case of equal values, delete the first value(i'th) (left)
    
    // why?
    // if we delete from the i+<x>th value, the value at index i remains unchanged,
    // might lead to more deletion than the optimal value
    
    // in case the array length left at the end is odd,
    // delete from the right (last val), because deleting it doesn't impact any 
    // other element


    int deleted = 0;
    for(int 0;i<n;++i){
        if((i-deleted)%2==0 && arr[i]==arr[i+1]) {
            // delete the ith element
            deleted++;
        }
    }

    if((n - deleted)%2){
        deleted++;
    }
    
    cout<<deleted;
}
