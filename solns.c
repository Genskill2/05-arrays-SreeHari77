/* Enter your solutions in this file */
#include <stdio.h>

int max(int array[],int len){
  int max=array[0];
  for(int i=1;i<len;i++){
    if(array[i]>max){
       max=array[i] ;
    }
  }
  return max;
}

int min(int array[],int len){
  int min=array[0] ;
  for(int i=1;i<len ;i++) {
    if(array[i]<min){
      min=array[i];
    }
  }
  return min; 
}

float average(int array[],int len){
  float sum = 0 ;
  for(int i=0;i<len;i++){
    sum=sum+array[i] ;
  }
float avg = sum/len ;
}

int mode(int array[],int len){
  int l=max(array,len);
  int s=min(array,len) ;
  int diff=l-s+1;
  int count[diff];
  for(int x=0;x<diff;x++){
    count[x]=0; 
  }
  for( int i=s ; i<l+1; i++ ) {
    for(int a=0; a<len; a++) {
      if( array[a]==i ) {
        count[i-s] += 1;   
      }
    }
  }
    int num = max(count,diff) ;
    for( int b=0; b<diff ; b++) {
      if(count[b]==num) {
        return s+b ;
      }
    }
  }
  
  int factors(int array[],int num) {
    int b = 0 ;
    int x = num ;
    
    for( int i=2 ; i<=x ; i++) {
      if( x%i==0 ) {
        array[b] = i ;
        x /=1 ;
        i=1 ;
        b += 1 ;
      }
    }
    return b ;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
        
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
