# include <iostream>

using namespace std;


int main(){

int n;
cout<<"Enter the number of elements: ";
cin>>n;

int arr[n];

for(int i= 0; i<n; i++){
cout<<"Enter value at index "<<i<<"\n";
cin>>arr[i];
}

int sum = 0;

for(int i=0; i<n; i++){
sum = arr[i] + sum;
}

cout<<"The sum of the array is: "<<sum;

return 0;
}
