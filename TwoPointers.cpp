#include<iostream>
using namespace std;

//Two pointers is used in some questions like the following one
//Given a sorted array, find the number of pairs which have a sum = k
//Time complexity of this solution will be O(N)
//Space complexity will be O(1)

int Fun(int a[], int size_a, int k){
  int start = 0, end = size_a-1, count = 0, start_count = 1, end_count = 1;

  for(start = 0;start<end;start++){
    cout<<"start first"<<start<<endl;
    cout<<"start in first value"<<a[start]<<endl;
    if(a[start] + a[end] > k){
      end--;
      cout<<"end in first if - "<<a[end]<<endl;
    }

    else if ((a[start] + a[end] == k)){
      if(a[start] != a[end]){
        while(a[start] == a[start+1]){
          cout<<"element in array - "<<a[start]<<endl;
          start_count++;
          cout<<"start_count - "<<start_count<<endl;
          start++;
          cout<<"start - "<<start<<endl;
        }
        while (a[end] == a[end-1]) {
          cout<<"element in array - "<<a[end]<<endl;
          end_count++;
          cout<<"end_count - "<<end_count<<endl;
          end--;
          //cout<<"end - "<<end<<endl;
        }
        count += start_count * end_count;
        cout<<"count"<<count<<endl;
      }

      if((a[start] == a[end])){
        cout<<"start in equal"<<start<<endl;
        cout<<"end in equal"<<end<<endl;
        count += end-start+1;
      }
    }


  }

  // while(start<end){
  //
  //   if(a[start] + a[end] > k){
  //     end--;
  //     cout<<"end - "<<end<<endl;
  //   }
  //   else if(a[start] + a[end] < k){
  //     start++;
  //     cout<<"start - "<<start<<endl;
  //   }
  //   else{
  //     while(a[start] == a[start+1]){
  //       cout<<"element in array - "<<a[start]<<endl;
  //       start_count++;
  //       cout<<"start_count - "<<start_count<<endl;
  //       start++;
  //       cout<<"start - "<<start<<endl;
  //     }
  //     while (a[end] == a[end-1]) {
  //       cout<<"element in array - "<<a[start]<<endl;
  //       end_count++;
  //       cout<<"end_count - "<<end_count<<endl;
  //       end--;
  //       cout<<"end - "<<end<<endl;
  //     }
  //     count += start_count * end_count;
  //   }
  // }
  return count;
}

int main(){
  int a[] = {1,4,4,5,5,5,6,6,11};
  int size_a= sizeof(a)/sizeof(int);
  int k = 8;  // pairs will have sum = 11

  cout<<Fun(a, size_a, k)<<endl;
}
