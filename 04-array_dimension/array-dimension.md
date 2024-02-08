# Array Dimension

### >\_ ] Array Dimensi Tiga (Three Dimensional Array)

1. Deklarasi Array Dimensi Tiga  
   Digunakan untuk mengelola data dalam bentuk 3 dimensi atau tiga sisi.  
   Deklarasi: $\text{TypeData NamaVar [index1] [index2] [index3]}$  
   Misal: $\text{int A [3][4][2]}$

   <p align="center">
    <img src="https://github.com/AdonNeet/DataStructure_Learn/blob/main/04-array_dimension/assets/arr342.jpg" alt="Ilustrasi array A [4][3][2]" width="50%" height="auto">
   </p>

2. Menentukan jumlah elemen dalam Array dimensi 3

<center>

| $$\begin{align*}&\text{n} \\ &\pi \ \text{(index array)} \\ &\text{i = 1} \\ \end{align*}$$ |
| ------------------------------------------------------------------------------------------- |

</center>

$$\pi = \text{Perkalian dari statemen sebelumnya}$$

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Contoh:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Suatu array X dideklarasikan:

$$\text{int A [3][4][2]}$$

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; maka jumlah elemen dimensi tiga tersebut adalah:

$$\text{(3) * (4) * (2) = 24}$$

3. Pemetaan Array Dimensi Tiga

<div style="border: 1px solid white; padding: 10px; width: fit-content; max-width: 500px; height:auto; margin: 0 auto;">

$$
\begin{align*}
&\text{Rumus:} \\
&\text{@M[m][n][p] = M[0][0][0] + [((m-1) * (jum.elemen2 * } \\
&\quad\quad\quad\quad\quad\quad \ \ \ \text{jum.elemen3)) + ((n-1) * (jum.elemen3))} \\
&\quad\quad\quad\quad\quad\quad \ \ \ \text{+ (p-1)] * L} \\
\end{align*}
$$

</div>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Contoh:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Suatu array X dideklarasikan:

$$\text{int A [3][4][2]}$$

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; dengan alamat awal indes $\text{A[0][0][0]}$ berada di $0011_{(H)}$ dan ukuran type data int = 2.  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Tentukan alamat array di $\text{A[2][3][2]}$!

<div style="padding: 10px; width: fit-content; max-width: 500px; height:auto; margin: 0 auto;">

$$
\begin{align*}
&\text{Penyelesaian:} \\
&\text{@M[m][n][p] = M[0][0][0] + [((m-1) * (jum.elemen2 * } \\
&\quad\quad\quad\quad\quad\quad \ \ \ \text{jum.elemen3)) + ((n-1) * (jum.elemen3))} \\
&\quad\quad\quad\quad\quad\quad \ \ \ \text{+ (p-1)] * L} \\
\end{align*}
$$

$$
\begin{align*}
&A[2][3][2] = 0011_{(H)} + [((2-1) * 4 * 3) + ((3-1) * 3) + (2-1)] * 2 \\
&\quad\quad\quad\quad = 0011_{(H)} + [12 + 6 + 1] * 2 \\
&\quad\quad\quad\quad = 0011_{(H)} + 38_{(D)} \\
&\quad\quad\quad\quad = 0011_{(H)} + 26_{(H)} \\
&\quad\quad\quad\quad = 0037_{(H)}  \\
\end{align*}
$$

</div>

4. Contoh Program Array DImensi Tiga

```cpp
#include <bits/stdc++.h>
using namespace std;

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
```

<p align="center">
    <img src="https://github.com/AdonNeet/DataStructure_Learn/blob/main/04-array_dimension/assets/outputArrA.png" alt="Ilustrasi output array A " width="35%" height="auto">
</p>

### >\_ ] Tringular Array

> Under construction
