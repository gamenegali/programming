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
 
        int n, x, k;
        cin >> n >> k;

        if(n >= k){
            if(n%k == 0) x = 1;
            else x = 2;
        }   
        else{
            if(k%n == 0) x = k/n;
            else x = 1 + k/n;
        }

        cout << x << endl;


        t--;
    }
 
    return 0;
}