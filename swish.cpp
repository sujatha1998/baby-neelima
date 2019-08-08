
#include <iostream>

using namespace std;

int main() {
  int x,p,s=0,y;
  cin>>x>>p;
  while(x>0)
  {
  s=s+x;      
  y=(x*p)/100;
  x=x-y;
  
  }
  cout<<s;
}

