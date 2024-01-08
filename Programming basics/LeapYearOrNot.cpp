#include<iostream>
using namespace std;
int main(){

  int y;
  cout<<"enter the year you want to check :" <<" ";
  cin>>y;

  if(y%400==0){
    cout<<"This Year is leap Year "<< y;
  }else if (y%100 == 0){
   cout<<"THis is not leap year "<< y;
  }else if(y%4==0){
   cout<<"THis is not leap Year "<<y;

  }else{
   cout<<"THis is not leap year " <<y;
  }



}
