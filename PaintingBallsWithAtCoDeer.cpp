#include<bits/stdc++.h>
using namespace std;


#define rep(i, a, b) for(int i = a; i < b; i++)
#define rep1(i, a, b) for(int i = a; i <= b; i++)

int arr[1010][1010];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    rep1(i, 1, k){
        arr[i][0] = 1;
    }
    arr[1][n-2] =0;
    rep1(i, 1, k){
        rep1(j, 1, n-1){
            if(i==1 && j == n-2){
                arr[i][j] = 0;
            }else{
                arr[i][j] = pow(k-1, j);
            }
        }
    }
    int ans = k* arr[1][n-1];
    cout << ans;
    return 0;
}
