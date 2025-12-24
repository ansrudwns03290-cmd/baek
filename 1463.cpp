#include<iostream>
#include<tuple>

using namespace std;

tuple<int ,int> t[40];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    int n;

    cin >> T;

    get<0>(t[0]) = 1;
    get<1>(t[0]) = 0;
    get<0>(t[1]) = 0;
    get<1>(t[1]) = 1;
    
    while(T--){
        cin >> n;
        
        for(int i=2; i<=n; i++){
            get<0>(t[i]) = get<0>(t[i-1]) +  get<0>(t[i-2]);
            get<1>(t[i]) = get<1>(t[i-1]) +  get<1>(t[i-2]);
        }

        cout << get<0>(t[n]) << ' ' << get<1>(t[n]) << '\n';
    }
    return 0;
}