#include <iostream>
#include <map>
using namespace std;
void read(int *arr, int n, int t){
    for (int i=0;i<n;i++){
        cin >> arr[i]; arr[i]-=t;
    }
}

void solve(int *arr, int n){
    map<int, int>mapa;
    pair<int, int>answer=make_pair(-1, -1);
    mapa[0]=1;
    int suma=0;
    for (int i=0;i<n;i++){
        suma+=arr[i];
        int anterior=mapa[suma];
        if (anterior==0){
            mapa[suma]=i+2;
        }
        else{
            int largo=i-(anterior-2);
            if (largo>answer.second)
                answer=make_pair(anterior-1, largo);
        }
    }
    if (answer.second==-1)
        cout << "-1\n";
    else
        cout << answer.first << " " << answer.second << "\n";
}


int main(){
    int n, t;
    cin >> n >> t;
    int arr[n];
    read(arr, n, t);
    solve(arr, n);
    return 0;
}
