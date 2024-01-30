/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-31 01:25:20.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <conio.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


string octalToBinary(string octal) {
    string binary = "";
    
    // Konversi setiap digit oktal ke 3 digit biner
    for (char digit : octal) {
        switch (digit) {
            case '0':
                binary += "000";
                break;
            case '1':
                binary += "001";
                break;
            case '2':
                binary += "010";
                break;
            case '3':
                binary += "011";
                break;
            case '4':
                binary += "100";
                break;
            case '5':
                binary += "101";
                break;
            case '6':
                binary += "110";
                break;
            case '7':
                binary += "111";
                break;
            default:
                cout << "Input tidak valid." << endl;
                return "";
        }
    }
    
    if(binary[0]=='0'){
    	binary = binary.substr(1);
    }

    return binary;
}

int main() {
    string octalNumber;

    cout << "Masukkan bilangan oktal: ";
    cin >> octalNumber;

    string binaryNumber = octalToBinary(octalNumber);

    cout << "Bilangan biner: " << binaryNumber << endl;

    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}
