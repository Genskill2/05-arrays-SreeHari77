/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int len) {
  int max = arr[0];
  for(int i=1 ; i<len ; i++) {
    if( arr[i] > max) {
       max = arr[i] ;
    }
  }
  return max;
}

int min( int arr[], int len) {
  int min = arr[0] ;
  for( int i=1 ; i<len ; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }
  return min; 
}

float average(int arr[], int len ) {
  float sum = 0 ;
  for( int i=0 ; i<len ; i++ ) {
    sum += arr[i] ;
  }
float avg = sum/len ;
return avg ;
}

int mode( int arr[], int len ) {
  int l = max( arr,len );
  int s = min( arr,len ) ;
  int diff = l-s + 1;
  int count[diff];
  for( int x=0; x<diff ; x++) {
    count[x] = 0; 
  }
  for( int i=s ; i<l+1; i++ ) {
    for(int a=0; a<len; a++) {
      if( arr[a]==i ) {
        count[i-s] += 1;   
      }
    }
    int num = max(count,diff) ;
    for( int b=0; b<diff ; b++) {
      if(count[b]==num) {
        return s+b ;
      }
    }
  }
  
  int factors( int num, arr[] ) {
    int b = 0 ;
    int x = num ;
    
    for( int i=2 ; i<=x ; i++) {
      if( x%i==0 ) {
        arr[b] = i ;
        x=x/i ;
        i=1 ;
        b += 1 ;
      }
    }
    return b ;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
        
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
