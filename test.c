p = malloc(1);
if (c == 1)
  q = p;
else
  q = malloc(1);
*p = 1;
free(q);
//if (! (c == 1))free(p);
