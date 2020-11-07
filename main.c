#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if (argc != 4){
    printf("check the arguments \n");
    return 0;
  }
    
  int e1, e2, n, d1, d2;

  n = atoi(argv[1]);
  e1 = atoi(argv[2]);
  e2 = atoi(argv[3]);
  //printf("n = %d, e1 = %d, e2 = %d, s = %s", n, e1, e2, s);
  
  if ( (e1>=-100 && e1<=100) && (e2>=-100 && e2<=100) && (n>=-100 && n<=100)){
    d1 = abs(e1 - n);
    d2 = abs(e2 - n);
    
    //printf("distancia 1:   %d\n", d1);
    //printf("distancia 2:   %d\n\n", d2);


    if (d1 > d2){
      printf("2\n\n");
    }
    else if(d1 < d2){
      printf("1\n\n");
    }
    else {        //d1==d2
      if(e1 >= e2){
        printf("1\n\n");
      }
      else {
        printf("2\n\n");
      }      
    }

  return 0;
  }
  else if(e1==999 && (e2 >= -100 && e2 <= 100) && (n >= -100 && n <= 100)) {
    printf("2\n");
  }
  else if(e2==999 && (e1 >= -100 && e1 <= 100) && (n >= -100 && n <= 100)){
    printf("1\n");
  }
  else {
   printf("error\n\n");
  }
 
}
