#include<iostream>
using namespace std;

//Dutch National algorithm or 0,1,2 sort
//Time complexity of dnf sort is O(N)

void Fun(int a[], int size_a){
  int low = 0, mid = 0, high = size_a-1;
  while(mid<high){
    if(a[mid] == 1){
      mid++;
    }
    else if(a[mid] == 2){
      swap(a[mid], a[high]);
      high--;
    }
    else if(a[mid] == 0){
      swap(a[mid], a[low]);
      low++;
      mid++;
    }
  }

  for(int i=0;i<size_a;i++){
    cout<<a[i]<<" ";
  }
}

int main(){
  int a[] = {1,1,2,0,0,1,2,2,1,2};
  int size_a = sizeof(a)/sizeof(int);
  Fun(a, size_a);

  return 0;
}

//********************************************************************************************
/*
Explanation -
Dnf sort or 0,1,2 sort
Here we have array with 3 different no.s and we've sort them, eg. {1,1,2,0,0,1,2,2,1,2}
now we first use 3 pointers in this namely low, mid, high
we keep low and mid pointers at 0th position and high to n-1th position
we use loop  till the condition mid<high
we compare using mid pointer like following

if(a[mid] == 0){
swap(a[mid],a[low])
mid++;
low++;
}

else if(a[mid]==1){
mid++;
}

else if(a[mid]==2){
swap(a[mid],a[high])
high--;
}
*/
