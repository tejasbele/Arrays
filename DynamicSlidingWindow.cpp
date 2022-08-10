#include<iostream>
using namespace std;

//Dynamic Sliding Window approach
//This is used when our sliding window's length is not fixed, it changes in runtime
//Find the length of shortest subarray which sum is greater than oar equal to some value
//Explanation at the end of the code

int Dynamic(int a[], int size_a, int k){
  int start = 0, end = 0, sum = 0, min_length = 0;
  while (end < size_a) {
    sum += a[end];
    end++;

    while(sum>=k && start<end){
      sum = sum -a[start];
      start++;
      min_length = end - start +1;
    }

  }
  return min_length;
}

int main(){
  int a[] = {1,2,3,4,5,6};
  int size_a = sizeof(a)/sizeof(int);
  int k = 7; //sum should be greater than or equal to 7

  cout<<Dynamic(a, size_a, k)<<endl;
}

//*****************************************************************************************
/*
Explanation
we have to find the minimum length of the sub array which has sum >= 7
now in this, length of siding window is not constatnt, it is changing in runtime
for this lets say we have array = [1,2,3,4,5,6]
first we start adding the numbers till we get sum >= 7
first sub array result is [1,2,3,4] -> sum is 10 and length is 4
now aht will we do, we start to decrease the size of array
this time we remove first element in array we get = [2,3,4] sum is 9 and length is 3
we again remove one element as above and we get = [3,4] sum is 7 and length is 2 
now uf we do same = [4] sum is 4 less than 7 so we keep result of min length to 2
then we traverse the rest from original array [1,2,3,4,5,6]
and do the same procedure
*/
