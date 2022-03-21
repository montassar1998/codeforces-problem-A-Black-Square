#include <bits/stdc++.h>
using namespace std;
int main() {
  int cal[4];
  string s; 
  int res=0;
  for(int i=0;i<4;i++){
    cin>>cal[i];
  }
  cin>>s;
  for(int i=0;i<s.length();i++){
    res+=cal[s[i]-49];
  }
  cout<<res<<'\n';
  return 0;
}
