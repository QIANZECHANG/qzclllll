struct M{int* p1;int* p2;};
func(int a,int b){
  struct M m;
  m.p1=malloc(4);
  m.p2=malloc(4); 
  int c=a+b; 
  int* n;
  if(c>5)
    n=m.p1;
  else
    n=malloc(4);
  free(m.p1+8);
  free(n);
  if(c<=5)free(m.p1);
}







p = malloc(1);
if (c > 1)
  q = p;
else
  q = malloc(1);
c = 2;
*p = 1;
free(q);


#include <stdlib.h> 
struct MemHider { void * hiddenData; };
int main( int argc, char ** argv ) { 
  struct MemHider someMemory; 
  struct MemHider someMemory2; 
  struct MemHider someMemory3; 
  struct MemHider *alias = &someMemory; 
  struct MemHider *alias3 = &someMemory3; 
  someMemory.hiddenData = malloc(sizeof(char)); 
  free(alias->hiddenData);
  someMemory2.hiddenData = malloc(sizeof(char)); 
  free((&someMemory2)->hiddenData); 
  alias3->hiddenData = malloc(sizeof(char)); 
  //free(someMemory3.hiddenData); 
  return 0;
}

#include <stdlib.h>
struct MemHider { void * hiddenData; }; 
void dataHider1( void * ); 
void dataHider2( void * ); 
int main( int argc, char ** argv ) { 
  struct MemHider someMemory;
  struct MemHider someMemory2; 
  dataHider1( &someMemory ); 
  dataHider2( &someMemory2 ); 
  free( someMemory.hiddenData ); 
  free( someMemory2.hiddenData ); 
  return 0; 
} 
void dataHider1( void * _this ) { 
  struct MemHider * this = ( struct MemHider * )_this;
  this->hiddenData = malloc( sizeof( char ) ); 
} 
void dataHider2( void * _this ) { 
  ( ( struct MemHider * )_this)->hiddenData = malloc( sizeof( char ) ); 
}




int foo(int a, int b){
  int c;
  if (a)
    c = a - b; 
  else
    c = a;
  return c;
}
