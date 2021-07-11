#include<iostream>
#include<cmath>
#include<string>
using namespace std;


int main()
{
int x,y;
string die_roll[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
cin>>x>>y;
x=max(x,y);

cout << die_roll[6-x];

return 0 ;
}