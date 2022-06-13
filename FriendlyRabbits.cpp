#include<bits/stdc++.h>
using namespace std;


#define rep(i, a, b) for(int i = a; i < b; i++)
#define rep1(i, a, b) for(int i = a; i <= b; i++)
int arr[100010];
// https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b?lang=en
// O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;

    rep1(i, 1, n){
        cin >> arr[i];

    }
    int cnt = 0;
    rep1(i, 1, n){
        if(arr[arr[i]] == i){
            cnt++;
        }
    }
    cout << cnt/2;
    return 0;

}
