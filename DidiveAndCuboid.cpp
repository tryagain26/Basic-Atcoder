#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll a,b,c;
    cin >> a >> b >> c;

    if(a%2 == 0 || b%2 == 0 || c%2 == 0){
        cout << 0;
        return 0;
    }
    if(a&1 && b&1 && c&1){
        ll dif = min(a*b, min(b*c, c*a));
        cout << dif;
    }
    return 0;


}
