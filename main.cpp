#include<cstring>
#include<stdio.h>
#include<iostream>
using namespace std;
// A utility function to find maximum of two integers
int max(int a, int b)
{
 return (a > b)? a : b;
}
int LCSubStr(char *X, char *Y, int m, int n)
{ int LCSuff[m + 1][n + 1];
 int result = 0;
 for (int i = 0; i <= m; i++)
 { for (int j=0; j<=n; j++)
 { if (i == 0 || j == 0)
 LCSuff[i][j] = 0;
 else if (X[i-1] == Y[j-1])
 { LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
 result = max(result, LCSuff[i][j]);
 }
 else LCSuff[i][j] = 0;
 }
 }
 return result;
}
/*Main */
int main()
{
 char X[30],Y[30] ;

 cout<<"Enter the first string"<<endl;
 gets(X);
 cout<<"Enter the second string"<<endl;
 gets(Y);
 int m = strlen(X);
 int n = strlen(Y);
 cout << "Length of Longest Common Subsequence is " << LCSubStr(X, Y, m, n);
 return 0;
}
