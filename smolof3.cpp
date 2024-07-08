# include<iostream>

using namespace std;

int main(){


int arr[3];
cout<<"Enter three numbers";

cin>>arr[0]>>arr[1]>>arr[2];
int less = arr[0], great = arr[0];

for(int x=1; x < 3; x++){
if(arr[x] > great){
great =  arr[x];
} 

if(arr[x]< less){
less = arr[x];
}

}
cout<<"great "<< great<<"less "<<less;

return 0;

}
