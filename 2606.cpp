#include<iostream>
#include<vector>

using namespace std;

vector<int> v[100];
int virus[100];
int ans=0;

void dfs(int x){
    for(int i=0; i<v[x].size(); i++){
        int node = v[x][i];

        if(virus[node] == 0){
            virus[node] = 1;
            ans++;
            dfs(node);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    int a, b;

    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    virus[1] = 1;
    dfs(1);

    cout << ans;
    return 0;
}