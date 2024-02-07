# Array Dimension

**Array Dimensi Tiga (Three Dimensional Array)**

1. Deklarasi Array Dimensi Tiga  
   Digunakan untuk mengelola data dalam bentuk 3 dimensi atau tiga sisi.  
   Deklarasi: Type_Data Nama_Var [index1] [index2] [index3]  
   Misal: int A [3][4][2]

   <p align="center">
    <img src="https://github.com/AdonNeet/DataStructure_Learn/blob/main/04-array_dimension/assets/arr342.jpg" alt="Ilustrasi array A [4][3][2]" width="50%" height="auto">
   </p>

2. Menentukan jumlah elemen dalam Array dimensi 3

<div style="border: 1px solid white; padding: 10px; width: fit-content; max-width: 300px; height:auto; margin: 0 auto;">

$$
\begin{align*}
&\text{n} \\
&\pi \ \text{(index array)} \\
&\text{i = 1} \\
\end{align*}
$$

</div>

$$\pi = \text{Perkalian dari statemen sebelumnya}$$
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Contoh:  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;uatu array X dideklarasikan:
$$\text{int A [3][4][2]}$$  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;maka jumlah elemen dimensi tiga tersebut adalah:
$$\text{(3) * (4) * (2) = 24}$$

3. Pemetaan Array Dimensi Tiga

<div style="border: 1px solid white; padding: 10px; width: fit-content; max-width: 500px; height:auto; margin: 0 auto;">

$$
\begin{align*}
&\text{Rumus:} \\
&\text{@M[m][n][p] = M[0][0][0] + \{((m-1) * (jum.elemen2 * } \\
&\ \quad\quad\quad\quad\quad\quad \ \text{jum.elemen3)) + ((n-1) * (jum.elemen3))} \\
&\ \quad\quad\quad\quad\quad\quad \ \text{+ (p-1)\} * L} \\
   \end{align*}
$$

</div>

> Under construction
