#include<iostream>
using namespace std;
/*time complexity O(n*d)*/
/*int rotate(int *a,int r,int n)
{
  for(int i=0;i<r;i++)
  {
    int t=a[0];
    for(int j=0;j<n-1;j++)
      a[j]=a[j+1];
    a[n-1]=t;
  }
  return *a;
}*/
void rev(int *a,int s,int e)
{
  while(s<e)
  {
    int t=a[s];
    a[s]=a[e-1];
    a[e-1]=t;
    s++;
    e--;
  }
}
void rotate(int *a,int r,int n)
{
  rev(a,0,r);
  rev(a,r,n);
  rev(a,0,n);
}
/*juggling algoritm use time complexity O(n)*/
/*void rotate(int *a,int r,int n)
{
  int gcd;
  for(int i=1;i<=n && i<=r;i++)
    if(n%i==0&&r%i==0)
      gcd=i;
  for(int i=0;i<gcd;i++)
  {
    int j=i,temp=a[j];
    while(1)
    {
      int k=j+r;
      if(k>=n)
        k-=n;
      if(k==i)
        break;
      a[j]=a[k];
      j=k;
    }
    a[j]=temp;
  }

}*/
int main()
{
  int a[100],r,n;
  cout<<"Enter the array size\n";
  cin>>n;
  cout<<"\nEnter array values\n";
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<"\nEnter no of rotations\n";
  cin>>r;
  cout<<"\narray before rotation\n";
  for(int i=0;i<n;i++)
    cout<<a[i];
  rotate(a,r,n);
  cout<<"\narray after rotation\n";
  for(int i=0;i<n;i++)
    cout<<a[i];
  return 0;
}
//write code using reversal algorithm
