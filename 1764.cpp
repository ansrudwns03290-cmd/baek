#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    vector<string> see, see_look;
    string s;

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> s;
        see.push_back(s);
    }

    sort(see.begin(), see.end());

    for(int i=0; i<M; i++){
        cin >> s;

        if(binary_search(see.begin(), see.end(), s))
            see_look.push_back(s);
    }

    sort(see_look.begin(), see_look.end());

    cout << see_look.size() << '\n';
    for(auto itr : see_look)
        cout << itr << '\n';

    return 0;
}