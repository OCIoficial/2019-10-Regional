#include <iostream>

using namespace std;

void read(int *arr, int n){
    for (int i=0;i<n;i++)
        cin >> arr[i];
}

int patterns(int *arr, int n, int *pat, int m){
    int ans=0;
    for (int i=0;i<n+1-m;i++){
        bool match=true;
        for (int j=0;j<m;j++){
            if (pat[j]!=arr[i+j])
                match=false;
        }
        ans+=(int)match;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n], pat[3];
    read(arr, n);
    read(pat, 3);

    cout << patterns(arr, n, pat, 3) << endl;
    return 0;
}
