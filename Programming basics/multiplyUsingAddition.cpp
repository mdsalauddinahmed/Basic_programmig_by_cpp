#include<iostream>
using namespace std;
int main(){

 int a,b,multiplication=0;
 cin>>a>>b;

 if(b<0){
    a=a+b;
    b=a-b;
    a=a-b;
 }
 if(a>0){
    for(int i=1;i<=a;i++){
      multiplication +=b;
    }
 }else if(a<0){

    for(int i=a;i<=-1;i++){
      multiplication -=b;
    }

 }

 cout<<multiplication<<" ";


}
