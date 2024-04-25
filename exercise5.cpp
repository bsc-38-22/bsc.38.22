
# include <iostream>
# include <cmath>
using namespace std;
double calculateSquareArea(double side) {
    return side * side;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}


double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main(){

    char selection;

    do{

    cout << "Please select the area of the shape to calculate"<< endl;
    cout << "1. Triangle" <<endl;
    cout << "2. Rectangle " <<endl;
    cout << "3. square" <<endl;
    cout << "4. Quit program" <<endl;

    cout << "Enter selection:"<<endl;
    
    cin >> selection;

    switch (selection) {
            case '1': 
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;

                case '2':
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;

                case '3':
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;

                case '4':
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
                break;

                default:
                cout << "Invalid option. Please select a valid option." << endl;
                return 0;
                break;

        
        }
    } while (selection != 4);
              

    return 0;

}