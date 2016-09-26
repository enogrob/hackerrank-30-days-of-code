#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float mealCost, tip, tax, totalCost;
    cin >> mealCost >> tip >> tax;
    tip = mealCost * (tip/100);
    tax = mealCost * (tax/100);
    totalCost = mealCost + tip + tax;
    printf("The total meal cost is %0.f dollars.", totalCost);   
    return 0;
}
