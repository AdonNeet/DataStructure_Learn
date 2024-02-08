/*
 *		Author	: AdonNeet
 *		Date	: 2024-02-08 19:15:02.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    // Deklarasi array tiga dimensi untuk menyimpan string
    string A[2][2][2];

    // Mengisi array dengan nilai
    A[0][0][0] = "String 1";
    A[0][0][1] = "String 2";
    A[0][1][0] = "String 3";
    A[0][1][1] = "String 4";
    A[1][0][0] = "String 5";
    A[1][0][1] = "String 6";
    A[1][1][0] = "String 7";
    A[1][1][1] = "String 8";

    // Menampilkan isi array
    cout << "Isi array A:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "A[" << i << "][" << j << "][" << k << "]: " << A[i][j][k] << endl;
            }
        }
    }

    return 0;
}