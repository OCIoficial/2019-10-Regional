#include <iostream>
using namespace std;
void read(int *arr, int n, int t){
    for (int i=0;i<n;i++){
        cin >> arr[i]; arr[i]-=t;
    }
}

void solve(int *arrn, int n){
    int arr[n+1];
    for (int i=0;i<n;i++){
        arr[i]=arrn[i];
        if (i>0)
            arr[i]+=arr[i-1];
    }
    arr[n]=1e9;
    pair<int, int>answer=make_pair(-1, -1);
    for (int i=0;i<n;i++){
        int restar=0;
        if (i>0)
            restar=arr[i-1];
        int left=i, right=n;
        for (int m=(left+right)/2;left<right;m=(left+right)/2){
            int suma=arr[m]-restar;
            if (suma<=0)
                left=m+1;
            else
                right=m;
        }
        if (left>i){
            if (arr[left-1]-restar==0){
                if (left-i>answer.second){
                    answer=make_pair(i, left-i);
                }
            }
        }
    }
    if (answer.first==-1)
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
