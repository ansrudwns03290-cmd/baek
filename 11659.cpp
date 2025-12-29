#include<iostream>

using namespace std;

int num[100001];
int sum[100001];

int main(void){
    int N, M;
    
    cin >> N >> M;

    for(int i=1; i<=N; i++){
        int temp;
        
        cin >> temp;
        num[i] = temp;
        if(i!=1){
            sum[i-1] = num[i-1] + temp;
        }
    }

    for(int i=0; i<M; i++){
        int a, b;
        int res=0;
        int j;

        cin >> a >> b;
        for(j=a; j<b; j+=2){
            res += sum[j];
        }

        if(j==b){
            res += num[j];
        }

        cout << res << '\n';
    }

    return 0;
}