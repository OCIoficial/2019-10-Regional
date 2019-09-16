#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > r;
    for(int i = 0; i < n; i++){
        pair<int, int> s, f;
        cin >> s.first >> f.first;
        s.second = 2;
        f.second = 1;
        r.push_back(s);
        r.push_back(f);
    }
    sort(r.begin(), r.end());
    int c = 0, best = -1;
    for(auto p : r){
        if(p.second == 2){
            c++;
            if(c > best) best = c;
        } 
        else {
            c--;
        }
    }
    cout << best << endl;
    return 0;
}
