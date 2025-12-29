#include<iostream>

using namespace std;

int MOD = 10007;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    int dp[1000];
    dp[0] = 1;
    dp[1] = 2;

    for(int i=2; i<n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }

    cout << dp[n-1] << '\n';
}