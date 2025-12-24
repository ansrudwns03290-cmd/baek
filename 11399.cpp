#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, P[1000]={0, };

    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> *(P+i);
    }

    sort(P, P+N);

    int result = 0;

    for(int i=0; i<N; i++){
        result += *(P+i) * (N-i);
    }

    cout << result;
}