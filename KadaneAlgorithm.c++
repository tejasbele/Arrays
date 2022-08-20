#include<iostream>
using namespace std;

//Kadane's Algorithm
//Used to find maximum sum of subarray in a given array
//time complexity is O(N)

int MaxSum(int a[6], int size){
  int max = 0;
  int sum = 0;
  for(int i=0;i<size;i++){
    sum += a[i];

    if(sum<0){
      sum = 0;
    }

    if(sum>max){
      max = sum;
    }
  }
  return max;
}

int MaxSum2(int a[], int size){
  int max = -100, sum = 0;
  for(int i=0;i<size;i++){
    sum += a[i];

    if(a[i] > sum){
      sum = a[i];
    }

    if(sum>max){
      max = sum;
    }
  }
  return max;
}

int main(){
  int a[] = {-5, 4, 6, -3, 4, -1};
  int size = sizeof(a)/sizeof(int);
  cout<<MaxSum(a, size)<<endl;

  //if all elements in array are negative then ->
  /*int b[] = {-10, -9, -5, -4, -3, -2};
  int size2 = sizeof(b)/sizeof(int);
  cout<<MaxSum2(b, size2)<<endl;*/
}
