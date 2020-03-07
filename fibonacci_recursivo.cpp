double FibonacciA2(int n);
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b);
double B[100];
 
main(){
   int n;
   double b;
   LARGE_INTEGER t_ini, t_fin;
   double secs;
   printf("\t\t n  | Fib(n) | [ms] \n");
   printf("\t\t-----+---------------+------\n");
   for(n=0;n<=100;n++){
      printf("\t\t%lld | ",n);
      QueryPerformanceCounter(&t_ini);
      b=FibonacciA2(n);
      QueryPerformanceCounter(&t_fin);
      secs = performancecounter_diff(&t_fin, &t_ini);
      printf("%20.f | %.6g\n",b,secs*1000);
   }
   system("PAUSE");
}
 
double FibonacciA2(int n){
    if (B[n]==0){
       if(n==0 || n==1)
          return(1);
       else
          B[n]= (FibonacciA2(n-1)+FibonacciA2(n-2));
    }
    return B[n];
}
 
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}