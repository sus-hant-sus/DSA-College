# include <iostream>

using namespace std;

int main(){
int n,m;
cout<<"Enter number of element in 1st and 2nd array: ";
cin>>n>>m;

int arr1[n], arr2[m], arr3[m+n];
cout<<"Enter elements for 1st array: ";
for(int i = 0; i<n; i++)
{
cin>>arr1[i];
}

cout<<"Enter elements for 2nd array: ";
for(int i = 0; i<m; i++)
{ 
cin>>arr2[i];
}
int j = 0;
for(int i = 0; i<(m+n); i++)
{

if(i < n)
{
arr3[i] = arr1[i];
}
if((i>=n) and i<(m+n))
{
arr3[i] = arr2[j];
j++;
}
}
cout<<"The combined arrays are\n";

for(int i = 0; i < (m+n); i++)
{
cout<<arr3[i]<<" ";
}
return 0;
}
