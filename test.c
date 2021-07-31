p = malloc(1);
if (c > 1)
  q = p;
else
  q = malloc(1);
c = 2;
*p = 1;
free(q);









int foo(int a, int b){
  int c;
  if (a)
    c = a - b; 
  else
    c = a;
  return c;
}
