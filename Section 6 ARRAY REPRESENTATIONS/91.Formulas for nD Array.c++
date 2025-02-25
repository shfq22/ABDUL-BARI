// ROW MAJOR FORMULA:

// Adress(A[i1][i2][i3]...[in]) = BaseAddress + (i1 * n2 * n3 * ... * nn + i2 * n3 * ... * nn + i3 * n4 * ... * nn + ... + in) * Size of int



// COLUMN MAJOR FORMULA:

// Adress(A[i1][i2][i3]...[in]) = BaseAddress + (in * n1 * n2 * ... * n(n-1) + in-1 * n1 * n2 * ... * n(n-2) + in-2 * n1 * n2 * ... * n(n-3) + ... + i1) * Size of int
// where n1, n2, n3, ..., nn are the dimensions of the array in the respective directions.