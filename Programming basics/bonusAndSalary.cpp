#include<iostream>
#include<string>
using namespace std;
int main(){

 float salary,bonus;

 string gender;

 cout<<"Enter M for man and Enter F for female :"<<" ";

 cin>>gender;
 cin>>salary;

 if(gender =="M" || gender == "m"){

    if(salary>10000){
        bonus = salary*0.05;
    }else
    bonus=salary*.07;
 }

   if(gender =="F" || gender == "f"){

    if(salary>10000){
        bonus = salary*0.1;
    }else
    bonus=salary*.12;
 }

salary +=bonus;
cout<<"Everbody get :"<<bonus<<" "<<salary;
}

