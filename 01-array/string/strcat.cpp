/*
 *		Author	: AdonNeet
 *		Date	: 2024-01-28 10:56:50.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <conio.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    char string1[] = "Belajar";
    char string2[] = "Logika Algoritma";
    cout<<"Menggabungkan String"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"string1: "<<string1<<endl;
    cout<<"string2: "<<string2<<endl;
    strcat(string1,string2);
    cout<<"setelah digabung, string 1 menjadi => "<<string1<<endl;
    cout<<"\nPress anything to exit...";
    getch();
    return 0;
}