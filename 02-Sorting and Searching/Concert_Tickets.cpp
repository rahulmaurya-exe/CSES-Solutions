/*
 ____  _       _            ____              _ 
|  _ \(_)_   _(_)_ __   ___/ ___|  ___  _   _| |
| | | | \ \ / / | '_ \ / _ \___ \ / _ \| | | | |
| |_| | |\ V /| | | | |  __/___) | (_) | |_| | |
|____/|_| \_/ |_|_| |_|\___|____/ \___/ \__,_|_|                                      
                                                  
*/
#include <bits/stdc++.h>
#define ll long long
#define deb1(x) cout << #x << " " << x << "\n";
#define deb2(x,y) cout << #x<<" "<<x<<" "<<#y<<" "<<y<<"\n";
#define deb3(x,y,z) cout << #x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<"\n";
#define ios()  ios::sync_with_stdio(0);cin.tie(0)
#define tc     int t;cin>>t;while(t--)
using namespace std;

void readFile() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
//----------------------------------------------------------------------------------
int main() {
    //readFile();
     ios();
    int nTic, mPer;
    cin>>nTic>>mPer;
    vector<int> n(nTic),m(mPer);
    set<pair<int, int>> ss;
    for (size_t i = 0; i < nTic; i++)
    {
        cin>>n[i];
        ss.insert({n[i],i});
    }
    
    for (size_t i = 0; i < mPer; i++)
    {
        cin>>m[i];
        auto it = ss.lower_bound({m[i]+1,0});
        if(it==ss.begin())
            cout<<"-1\n";
        else{
            it--;
            cout<<(*it).first<<"\n";
            ss.erase(it);
        }
    }
    
    return 0;
}
