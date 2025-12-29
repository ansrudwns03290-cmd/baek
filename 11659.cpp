#include<iostream>

using namespace std;

int sum[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    int a, b;

    cin >> N >> M;

    for(int i=1; i<=N; i++){
        int temp;
        cin >> temp;
        sum[i] = sum[i-1] + temp;
    }

    for(int i=0; i<M; i++){
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << '\n';
    }

    return 0;
}