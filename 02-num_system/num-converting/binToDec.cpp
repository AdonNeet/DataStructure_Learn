/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-29 22:32:32.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
 
    // Konversi binary ke decimal
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
 
    return decimalNumber;
}
 
int main() {
    long long binaryNumber;
 
    cout << "Masukkan bilangan biner: ";
    cin >> binaryNumber;
 
    int decimalNumber = binaryToDecimal(binaryNumber);
 
    cout << "Bilangan desimal: " << decimalNumber << endl;
 
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}