/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-28 11:15:56.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main(void)
{
    char str[100] = "Izumi Sagiri";
    char karakter = 'S';
    char *hasil;
    hasil = strchr(str,karakter);
    printf("Hasil peubah: %s\n", hasil);
    printf("karakter %c ditemukan pada indeks ke-%d", karakter, (hasil-str));
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}