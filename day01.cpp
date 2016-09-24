#include <iostream>  
#include <iomanip>  
#include <limits>  
using namespace std;  
int main() {  
    int i = 4;  
    double d = 4.0;  
    string s = "HackerRank ";  
    / Declare second integer, double, and String variables.  
    int i2;  
    double d2;  
    string s2;  
    // Read and save an integer, double, and String to your variables.  
    cin >> i2 >> d2;  
    cin.ignore(numeric_limits<streamsize>::max(), '\n') //ignore spaces, use new line as delimiter;  
    getline(cin, s2);  
    // Print the sum of both integer variables on a new line.  
    printf("%d\n", i+i2);  
    // Print the sum of the double variables on a new line.  
    printf("%0.1f\n", d+d2);  
    // Concatenate and print the String variables on a new line  
    // The 's' variable above should be printed first.  
    cout << s+s2;  
    return 0;  
}  