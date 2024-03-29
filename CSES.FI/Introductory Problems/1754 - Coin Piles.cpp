// github.com/wisniewskij/Code
// cses.fi/problemset/task/1754
// Coin Piles

#include <bits/stdc++.h>
 
#define ndl '\n'
#define ll long long
#define INF 1000000007
#define st first
#define nd second
#define debug(x) cout << #x << ": " << x << ndl
#define all(x) (x).begin(), (x).end()
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<b) swap(a,b);
        int surp = a-b;
        a-=2*surp;
        b-=surp;
        if(a>=0&&a%3==0) cout<<"YES"<<ndl;
        else cout<<"NO"<<ndl;
    }
}
