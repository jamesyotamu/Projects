#include <random>
#include <iostream>
 
using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dis(0,11);

    int daysUntilExpiration = dis(gen);
    cout<< daysUntilExpiration<<endl;

    switch (daysUntilExpiration)
    {
    case 0:
        cout<<"You have an active subscription";
        break;
    case 1:
       cout<<"Your subscription expires within a day! Renew now and save 20%!";
       break;
    case 2:
        cout<<"Your subscription expires in 2 days Renew now and save 10%!";
       break;
     case 3:
        cout<<"Your subscription expires in 3 days Renew now and save 10%!";
       break;
     case 4:
        cout<<"Your subscription expires in 4 days Renew now and save 10%!";
       break;
     case 5:
        cout<<"Your subscription expires in 5 days Renew now and save 10%!";
       break;
    case 6:
        cout<<"Your subscription will expire soon. Renew now!";
       break;
    case 7:
        cout<<"Your subscription will expire soon. Renew now!";
       break;
    case 8:
        cout<<"Your subscription will expire soon. Renew now!";
       break;
    case 9:
        cout<<"Your subscription will expire soon. Renew now!";
       break;
    case 10:
        cout<<"Your subscription will expire soon. Renew now!";
    default:
         cout<<"You have an active subscription";
    }

    return 0;
}