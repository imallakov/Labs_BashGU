#include<iostream>

using namespace std;

int main()

{
    int n, a [1009] [1009];
    cin>>n;
    for (int i=1;i<=n;++i)
    for (int j=1; j<=n;++j)
    a [i] [j]=0;
    
    for (int i=1; i<=n;++
    {
        a[i][i]=1;
        a[i][n-i+1]=1;
    }
    for (int i=1; i<=n;++i)
    for (int j=1; j<=n;++j)
    {
        cout <<a [i] [j] << " ";
        cout << endl;
    }
}
