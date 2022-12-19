bool isPowerOfTwo(int n)
{
    double x;       
 x = 1;
 if (n == 1)
 return (1);
    while (x < n)
   {
    x *= 2;
   if (x == n)
   return (1);
  }
    return (0);
}
