#include<iostream>
using namespace std;
int main(){
int ch,a,b,res;
cout<<"enter first operand:"<<endl;
cin>>a;
cout<<"enter second operand"<<endl;
cin>>b;
cout<<"\n case1.addition.\,\n case 2.subtraction,\n case 3.multipication,\n case 4.division ,\n case 5.exit \n";
cout<<"enter your choice:"<<endl;
cin>>ch;
switch(ch){
case 1:
res=a+b;
cout<<"addition="<<res<<endl;
break;
case 2:
res=a-b;
cout<<"subtraction="<<res<<endl;
break;
case 3:
res=a*b;
cout<<"multiplication="<<res<<endl;
break;
case 4:
res=a/b;
cout<<"division="<<res<<endl;
break;
default:
	cout<<"invalid number";
}
}
