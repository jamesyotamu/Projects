#include <random>
#include <iostream>
using namespace std;

int main () {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dis(0,11);

    int daysUntilExpiration = dis(gen);
    cout<< daysUntilExpiration<<endl;

    if (daysUntilExpiration >=6 && daysUntilExpiration<=10)
      cout<<"Your subscription will expire soon. Renew now!";

    else if(daysUntilExpiration>=2 && daysUntilExpiration<=5) 
      cout<<"Your subscription expires in "<<daysUntilExpiration<<" days Renew now and save 10%!";

     else if (daysUntilExpiration==1)
      cout<<"Your subscription expires within a day! Renew now and save 20%!";

    else if (daysUntilExpiration==0)
      cout<<"You have an active subscription";
    else
      cout<<"You have an active subscription";
    return 0;
}