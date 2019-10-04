#include <iostream>
using namespace std;
void read(int *arr, int n, int t){
    for (int i=0;i<n;i++){
        cin >> arr[i]; arr[i]-=t;
    }
}

void solve(int *arr, int n){
    for (int largo=n;largo>0;largo--){
        for (int i=0;i<n+1-largo;i++){
            int suma=0;
            for (int j=i;j<i+largo;j++){
                suma+=arr[j];
            }
            if (suma==0){
                cout << i << " " << largo << "\n";
                return;
            }
        }
    }
    cout << "-1\n";
}

int main(){
    int n, t;
    cin >> n >> t;
    int arr[n];
    read(arr, n, t);
    solve(arr, n);
    return 0;
}
