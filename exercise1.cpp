#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

    srand(time(NULL));

    int daysuntilExpiration = rand() % 12;

    if (daysuntilExpiration <= 10){
        cout << "Your subscription will expire soon.Renew now!" <<endl;
    }else if(daysuntilExpiration <= 5){
        cout << "Your subscription expires in " <<daysuntilExpiration << ",days Renew now and save 10%!"<< endl;

    } else if(daysuntilExpiration == 1){

     cout << "Your subscription expires within a day!Renew now and save 20%!" <<endl;

    }else {
        cout << "You have an active subscription!" <<endl;
    }

    return 0;

    
        


}