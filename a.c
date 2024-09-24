#include <stdio.h> 
#include<time.h>
#define N 1501
#define M 1500
int a[N][N];
int b[N][N];
int c[N][N];
int main() { 
    clock_t start, end; 
    start = clock();

    for(int i=1;i<=M;i++)
    for(int j=1;j<=M;j++)
    a[i][j] = i*j ;
    for(int i=1;i<=M;i++)
    for(int j=1;j<=M;j++)
    b[i][j] = i*j ;

    for(int i=1;i<=M;i++)
    for(int k=1;k<=M;k++)
    for(int j=1;j<=M;j++)
    c[i][j] += a[i][k] * b[k][j];
    end = clock();
    printf("%lf",(double)(end-start) /CLOCKS_PER_SEC );
}
/* 
gcc -O0 -o a a.c 
./a
*/
// 8.153997 7.794327 8.217228 ijk
// 6.580054 6.719174 6.724004 kij
// 6.440610 6.458934 6.450547 ikj