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
 
        int a,b,n,s;
        cin >> a >> b >> n >> s;

        int need_a = s/n;
        int used_a = min(need_a, a);
        int need_b = s - used_a * n;

        if(need_b <= b) cout << "YES" << endl;
        else cout << "NO" << endl;
 
 
        t--;
    }
 
    return 0;
}