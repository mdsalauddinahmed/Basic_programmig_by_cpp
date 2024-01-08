#include<iostream>
using namespace std;
int main(){

 int numofdays,years,weeks,days;
 cout<<"Enter the total days "<<" ";
 cin>>numofdays;

 years=numofdays/365;

 weeks =(numofdays%365)/7;

 days = (numofdays%365)%7;

 cout<<numofdays<<endl<<years<<endl<<weeks<<endl<<days<<" ";




}
