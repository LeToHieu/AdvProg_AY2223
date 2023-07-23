#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/

double myCos(double x) {
    double result = 1.0;
    double term = 1.0;
    int sign = -1;
    for (int i = 2; i <= 20; i += 2) {
        term *= x * x / (i * (i - 1));
        result += sign * term;
        sign *= -1;
    }
    return result;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/

double mySin(double x) {
    double result = x;
    double term = x;
    int sign = -1;
    for (int i = 3; i <= 19; i += 2) {
        term *= x * x / (i * (i - 1));
        result += sign * term;
        sign *= -1;
    }
    return result;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }

    
    return sqrt(x);
}
