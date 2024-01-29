/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-29 22:38:51.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;

vector<int> decimalToOctal(int decimal) {
    vector<int> octal;

    // Handle kasus khusus untuk bilangan 0
    if (decimal == 0) {
        octal.push_back(0);
    } else {
        // Konversi desimal ke oktal
        while (decimal > 0) {
            octal.push_back(decimal % 8);
            decimal /= 8;
        }
    }

    // Reverse vektor karena digit oktal diperoleh dari hasil sisa pembagian
    reverse(octal.begin(), octal.end());
    return octal;
}

int main() {
    int decimalNumber;

    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;

    vector<int> octalNumber = decimalToOctal(decimalNumber);

    cout << "Bilangan oktal: ";
    for (int digit : octalNumber) {
        cout << digit;
    }

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}
