#include <iostream>

using namespace std;


int main(){
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    int ans1=0, ans2=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            int value;
            cin >> value;
            if ((i+j)%2){
                ans1+=((1-value)*p);
                ans2+=((value)*q);
            }
            else{
                ans1+=(value*q);
                ans2+=((1-value)*p);
            }
        }
    }
    cout << min(ans1, ans2) << endl;
    return 0;
}
