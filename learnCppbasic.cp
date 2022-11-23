#include <iostream>
using namespace std;

#include <cmath>

#include <cstdlib>
#include <ctime>

int main() {
//    int a = 1;
//    int b = 2;
////    int temp = 0;
////    temp = b;
////    b = a;
////    a = temp;
////std::cout << file_size;
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << a;
    
    //const double pi = 3.14;
    
//    int x = 10;
//    int y = 3;
//double z = x / y;
//    int z = x % y;
//    x = x + 5;
//    int y = x++; //x = 11, y = 10
//    int z = ++x; //x = 11, z = 11
    
//    double x = 1 + 2 * 3;
    
//    int y = 20;
//    cout << "x = " << x << endl
//         << "y = " << y << endl;
    
    /*
    Sales = $95,000
    State Tax = 4%
    County Tax = 2%
    Total Tax = ?
    */
    
//    double sales = 95000;
//    double state_tax = 4;
//    double county_tax = 2;
//    cout << "Sales: $" << sales << endl
//         << "State Tax Rate: " << state_tax << "%" << endl
//         << "County Tax Rate: " << county_tax << "%" << endl
//         << "Total Tax = " << sales * state_tax/100 + sales * county_tax/100 << endl;
//
    
//    cout << "Enter a value: ";
    /*
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    const int x = 32;
    double celsius = (fahrenheit - x) / 1.8;
    cout << "Celsius: " << celsius << endl;
    */
    
//    double result = floor(1.2);
//    double result = pow(2, 3);
    
//    cout << "Radius: ";
//    int r;
//    cin >> r;
//    const double pi = 3.14;
//    cout << "A = " << pow(r, 2) * pi << endl;
    
//    double price = 99.99;
//    float interestRate = 3.67f;
//    long fileSize = 90000L;
//    char letter = 'a';
////    auto char letter_ = 'b';
//    bool isValue = true;
    
//    double number {1.2};
//    unsigned int number = -255;
    
//    int number = 1'000'000;
//    short another = number;
    
//    srand(6);
//    int number = rand() % 10;
    
    const short minValue = 1;
    const short maxValue = 6;
//    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second << endl;
    return 0;
}
