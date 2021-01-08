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
        int a, b, c;
        cin >> a >> b >> c;
        ll count = a+b+c;
        if(count % 9 == 0 and a>=count/9 and b>=count/9 and c>=count/9){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        t--;
    }
 
    return 0;
}