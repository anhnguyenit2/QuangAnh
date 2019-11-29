#include <iostream>
using namespace std;
//binary code
void qs(int a[], int left,int right)
{
    int i,j, x,y;
    i=left;
    j=right;
    x= a[(left+right)/2];
    do
    {
        while(a[i]<x && i<right)
            i++;
        while(a[j]>x && j>left)
            j--;
        if(i<=j)
        {
            y=a[i];
            a[i]=a[j];
            a[j]=y;
            i++;
            j--;
        }
    }
    while (i<=j);
    if (left<j)
        qs(a,left,j);
    if (i<right)
        qs(a,i,right);
}
void quick_sort(int a[], int n)
{
    qs(a,0,n-1);
}
int main()
{
    int n, i,num, first, last, middle;
    do
    {
        cout<<"Ban muon them bao nhieu phan tu vao mang?: ";
        cin>>n;
    }
    while(n < 1 || n > 30);
    int a[n];
    for (i=0; i<n; i++)
    {
        cout<<"Phan tu thu nhat: "<<(i+1)<<": ";
        cin>>a[i];
    }
    quick_sort(a,n);

    cout<<"Nhap vao phan tu ban muon tim kiem: ";
    cin>>num;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if(a[middle] < num)
        {
            first = middle + 1;

        }
        else if(a[middle] == num)
        {
            cout<<"\n"<<"True! \n";
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if(first > last)
    {
        cout<<"\n"<<"False!! \n";
    }
    return 0;
}
