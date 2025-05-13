#include<iostream>
#include<cmath>
int main(){
  double x =3.14;
  double y = 4;
  double z = 5;
  double ans;
  ans = std::max(std::max(x,y),z);
//  ans = std::min(std::min(x,y),z);
//  ans = pow(2,3);
//  ans = sqrt(9);
//  ans = abs(-3);
//  ans = round(x);
//  ans = ceil(x);
//  ans = floor(x);
  std::cout << ans;
  return 0;
}
