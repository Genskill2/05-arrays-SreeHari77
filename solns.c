/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int l) {
  int max = arr[0];
  for(int i=1 ; i<l ; i++) {
    if( arr[i] > max) {
       max = arr[i] ;
    }
  }
  return max;
}

int min( int arr[], int l) {
  int min = arr[0] ;
  for( int i=1 ; i<l ; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }
  return min; 
}

float average(int arr[], int l ) {
  float sum = 0 ;
  for( int i=0 ; i<l ; i++ ) {
    sum += arr[i] ;
  }
float avg = sum/l ;
}

int mode( int arr[], int l ) {
  int last = max( arr,l );
  int s = min( arr,l ) ;
  int d = last-s + 1;
  int count[d];
  for( int x=0; x<diff ; x++) {
    count[x] = 0; 
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
