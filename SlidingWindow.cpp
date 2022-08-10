#include<iostream>
using namespace std;

//Sliding Window approach/algo.
//it is used when we get the question like-
//Given an array find the sum of all subarrays of length k
//using sliding window we can solve this problem in O(N) time complexity
//explanation is in the end of main function

int Fun(int a[], int size_a, int k){
  int result[size_a - k + 1];
  int size_res = sizeof(result)/sizeof(int);
  int sum = 0;
  for(int i=0;i<k;i++){
    sum += a[i];
  }
  result[0] = sum;
  for(int i=0; i<size_res; i++){
    sum += a[i+k] - a[i];
    result[i+1] = sum;
  }

  for(int i=0; i<size_res; i++){
    cout<<result[i]<<endl;
  }

  return 0;
}

int main(){
  int a[] = {1,2,3,4,5,6};
  int length = 3;
  int size_a = sizeof(a)/sizeof(int);

  Fun(a, size_a, length);
}

//****************************************************************************
/*
Explanation -
we have array a = [1,2,3,4,5,6]
we have to find sum of all sub arrays of length k = 3
so result will be [6,9,12,15]
we will first create result array of length = size(a)-k+1
create sum = 0
then, calculate first subarray which is [1,2,3] and its sum is 6 and assign it to result array
now for array [2,3,4] we already have sum of 2 and 3 from last sum, so to get only 2 and 3 sum
we subtract 1 from it and add 4 in it.

*/
