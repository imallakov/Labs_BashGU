#include <iostream>
#include <random>

using namespace std;

void sort(int a[],int n)
{
    for(int i=1;i<n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            if(a[i]<a[j])
            {
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
}

int main()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(-100,100);

    int n,a[1009],b[1009],c[2018];
    cin>>n;
    
    for(int i=1;i<=n;++i)
    {
        a[i]=dist6(rng);
        b[i]=dist6(rng);
    }
    
    
    cout<<"array A:\n";
    for(int i=1;i<=n;++i)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"array B:\n";
    for(int i=1;i<=n;++i)
    cout<<b[i]<<" ";
    cout<<endl;
    
    
    sort(a,n);
    sort(b,n);
    
    cout<<"sorted array A:\n";
    for(int i=1;i<=n;++i)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"sorted array B:\n";
    for(int i=1;i<=n;++i)
    cout<<b[i]<<" ";
    cout<<endl;
    
    int i=1,j=1,k=0;
    while(i<=n || j<=n)
    {
        if( (i<=n&&a[i]>b[j]) || (j>n) )
        {
            c[++k]=a[i];
            ++i;
        }
        else
        {
            c[++k]=b[j];
            ++j;
            if(j>n&&i>n) break;
        }
    }
    
    cout<<"array C:\n";
    for(int i=1;i<=k;++i)
    cout<<c[i]<<" ";
    cout<<endl;
    return 0;
}
