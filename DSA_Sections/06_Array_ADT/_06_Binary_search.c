#include <stdio.h>
#include <stdlib.h>
int binary_scarch(int a[],int low , int high , int key ){
    if(low>high){
        return -1;
    }
    else{
        int mid = low + (high - low)/2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] > key){
            return binary_scarch(a,low , mid-1, key);
        }
        else{
        return binary_scarch(a,mid+1 , high, key);
        }
    }
  }
int main() {
  int a[] = {1,2,3,4,5,6,7,8,9};
  int size = sizeof a / sizeof a[0];
  int key = 8;
  int low = 0;
  int high = size-1;
  while(low< high)
  {
      int mid = low + ( high - low )/2;
    if (a[mid] == key)
    {
        printf("we find key %d at potison %d",key,mid);
        break;
    }
    else if(a[mid] < key){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
    
  }
  int result = binary_scarch(a,0,size-1,6);
  printf("\n%d", result);
  return 0;
}