double FibonacciA1(int n);
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b);
 
main(){
   int n;
   double b;
   LARGE_INTEGER t_ini, t_fin;
   double secs;
   printf("\t\t n | FIB(n) | [ms] \n");
   printf("\t\t-----+---------------+------\n");
   for(n=0;n<=100;n++){
      printf("\t\t%3d | ",n);
      QueryPerformanceCounter(&t_ini);
      b=FibonacciA1(n);
      QueryPerformanceCounter(&t_fin);
      secs = performancecounter_diff(&t_fin, &t_ini);
      printf("%20.f | %.6g\n",b,secs*1000);
   }
   system("PAUSE");
}
 
double FibonacciA1(int n){
    if((n==0)||(n==1))
        return (1);     
    else
        return(FibonacciA1(n-1)+FibonacciA1(n-2));
}
 
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

error