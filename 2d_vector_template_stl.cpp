#include <bits/stdc++.h>

using namespace std;

int findStreets(int n, vector< vector<int> > street) {
    // Complete this function
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        cin >> n >> m;
        vector< vector<int> > street(m,vector<int>(2));
        for(int street_i = 0;street_i < m;street_i++){
           for(int street_j = 0;street_j < 2;street_j++){
              cin >> street[street_i][street_j];
           }
        }
        int result = findStreets(n, street);
    }
    return 0;
}
