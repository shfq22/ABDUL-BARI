#include<iostream>
using namespace std;

// we have to pass compulsory argument first like currentMOney before factor
double moneyReceived(int currentMoney , float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    int money = 1000;
    // cin>>money;
    cout<<"if you have "<<money<<"Rs in your bank account,you will receive "<<moneyReceived(money)<<"Rs after 1 year"<<endl; // Output the amount received after 1 year using the default interest factor.
    // if not pass the factor then it will take the function default factor value
    cout<<"for VIP: if you have "<<money<<" in your bank account,you will receive "<<moneyReceived(money,1.1)<<"Rs after 1 year"<<endl;
    return 0;
}