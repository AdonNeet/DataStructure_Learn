/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-29 22:45:19.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int octalToDecimal(int octal) {
    int decimal = 0, i = 0, remainder;

    // Konversi oktal ke desimal
    while (octal != 0) {
        remainder = octal % 10;
        octal /= 10;
        decimal += remainder * pow(8, i);
        ++i;
    }

    return decimal;
}

int main() {
    int octalNumber;

    cout << "Masukkan bilangan oktal: ";
    cin >> octalNumber;

    int decimalNumber = octalToDecimal(octalNumber);

    cout << "Bilangan desimal: " << decimalNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}
