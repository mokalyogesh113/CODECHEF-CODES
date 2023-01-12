
//  GCD-CPP
long long int gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

//  LCM-CPP
long long int gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

//end