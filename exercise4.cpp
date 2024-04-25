# include <iostream>
using namespace std;

int main() {

    int value;

    while(true){

    cout << "Enter an integer value between 5 and 10:" <<endl;

    cin >> value;

    if (value >= 5 && value <= 10){
        
        cout << "Your input value(" << value <<")has been accepted."<< endl;

    }else if(value < 5 && value > 10){
        cout << "You entered" << value <<", please enter a number between 5 and 10." << endl;

    }else {
        cout << "sorry you entered an invalid number, please try again!"<<endl;
        return 0;
        break;

    }
 }

    return 0;

    
}