#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
char position;
string molesWords;
string x ="qwertyuiopasdfghjkl;zxcvbnm,./";
cin>>position;
cin>>molesWords;
for (int i = 0; i < molesWords.length(); i++) {
if(position =='R'){
molesWords[i]=x[x.find(molesWords[i])-1];
}else{
molesWords[i]=x[x.find(molesWords[i])+1];

}
}
cout<<molesWords;
return 0 ;
}