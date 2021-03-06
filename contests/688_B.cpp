#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
 
#define ll long long int
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> pi;
 
template <class vector_type>
void printVec(vector<vector_type> &v){
    for(int i=0; i < (int) v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}
 
int main(){
    int t;
 
    cin >> t;
    while(t){
        vector<int> testCase;
        int n, x;
        cin >> n;
 
        for(int i=0; i<n; i++){
            cin >> x;
            testCase.push_back(x);
        }

        ll result = 0;
        for(int i=1; i<n; i++){
            result += abs(testCase[i]-testCase[i-1]);
        }

        ll remove = 0;
        remove = (ll) max(abs(testCase[n-1]-testCase[n-2]), abs(testCase[0]-testCase[1]));
        for(int i=1; i<n-1; i++){
            remove = max(remove, (ll) abs(testCase[i-1]-testCase[i])+ abs(testCase[i]-testCase[i+1]) - abs(testCase[i-1]-testCase[i+1]));
        }
        
        cout << result - remove << endl;
        t--;
    }
 
    return 0;
}