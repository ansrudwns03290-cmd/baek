#include<iostream>

using namespace std;

int num[11];

void Add(void){
    for(int i=4; i<12; i++){
        for(int j=i-1; j>i-4; j--){
            num[i] += num[j];
        }
    }
}

int main(void){
    int T;

    num[1] = 1;
    num[2] = 2;
    num[3] = 3;

    Add();
    
    cin >> T;

    for(int i=0; i<T; i++){
        int temp;
        cin >> temp;
        cout << num[temp] << '\n';
    }

    return 0;
}