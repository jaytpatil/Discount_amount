#include<iostream>
using namespace std;

int main(){
 int x,topaid,discount;
cout<<"total amount: ";
cin>>x;
if(x>5000) {
  discount= x*12/100;
  cout<<"discount= "<<discount<<endl;
  topaid=x-discount;
  cout<<"amount to be paid: "<<topaid<<endl;
} else{
   discount=x*7/100;
   cout<<"discount=Rs "<<discount<<endl;
   topaid=x-discount; 
   cout<<"amount to be paid:Rs "<<topaid<<endl;
}
    return 0;
}