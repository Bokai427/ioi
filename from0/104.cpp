#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ll n;
  cin >> n;

  for(int i = 0;i < n; i++){
    for(int j = 0;j<n-i-1;j++){
      cout << " ";
    }
    for(int j = 0;j<i*2+1;j++){
      cout << "*";

    }
    for(int j = 0;j<n-i;j++){
      cout << " ";
    }
    cout << "\n";
  }
  return 0;
}
