/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-29 22:26:26.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

vector<int> decimalToBinary(int decimal) {
    vector<int> binary;
 
    // Handle kasus khusus untuk bilangan 0
    if (decimal == 0) {
        binary.push_back(0);
    } else {
        // Konversi decimal ke binary
        while (decimal > 0) {
            binary.push_back(decimal % 2);
            decimal /= 2;
        }
    }
 
    // Reverse vektor karena digit biner diperoleh dari hasil sisa pembagian
    reverse(binary.begin(), binary.end());
    return binary;
}
 
int main() {
    int decimalNumber;
    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;
 
    vector<int> binaryNumber = decimalToBinary(decimalNumber);
 
    cout << "Bilangan biner: ";
    for (int digit : binaryNumber) {
        cout << digit;
    }
 
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}