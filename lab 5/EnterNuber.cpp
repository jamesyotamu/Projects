#include <iostream>
using namespace std;
int main (){
  cout<<"Enter an integer between 5 and 10"<<endl;
  int num;
while(true) {
   cin>>num;

   if (num < 5)
     cout<<"you entered "<<num<<".Please enter a number between 5 and 10."<<endl;
   else if (num>=5 && num<=10){
      break;
   }
   else if(num > 10)
   cout<<"you entered "<<num<<".Please enter a number between 5 and 10."<<endl;
   else
    cout<<"Sorry, you have entered invalid number "<<endl;
   }
   cout<<"Your input value("<<num<<")has been accected.";
return 0;
  
} 