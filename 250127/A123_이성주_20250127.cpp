#include<iostream>
using namespace std;

int d[1000000];

int main(void) {
  int n;
  cin >> n;

  d[1] = 0; 

  for(int i = 2; i <= n; i++){
    d[i] = d[i-1]+1;  //1을 뺐을때
    if(i%2 == 0) d[i] = min(d[i],d[i/2]+1); //2로 나누어졌을때
    if(i%3 == 0) d[i] = min(d[i],d[i/3]+1); //3으로 나누어졌을때
  }
  
  cout << d[n];
  return 0;
}