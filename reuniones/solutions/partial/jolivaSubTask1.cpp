#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n==1){
        cout << "1\n";
        return 0;
    }
    pair<int, int>T1, T2;
    cin >> T1.first >> T1.second >> T2.first >> T2.second;
    if (T1>T2)
        swap(T1, T2);
    if (T2.first>=T1.second)
        cout << "1\n";
    else
        cout << "2\n";
    return 0;
}
