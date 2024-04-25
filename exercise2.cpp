# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int daysuntilExpiration = rand() % 12;

    switch (daysuntilExpiration) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        
        cout <<"Your subscription expires in " <<daysuntilExpiration << " days. Renew now and save 10%"<<endl;

        break;
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 11:
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
            cout << "You have an active subscription." << endl;
    }

    return 0;

    }
