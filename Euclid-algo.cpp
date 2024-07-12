// A = B * q + r ..... q->quotient r->remainder

// modular arithmetic
// (n1+n2)% mod = (n1%mod + n2%mod)% mod
// (n1*n2)% mod = (n1%mod * n2%mod)% mod

// calculate GCD

int gcd(int a, int b){

    if(b==0) return a;
    else{
        return gcd(b,a % b);
    }
}

// gcd(a,b) = gcd(b,a)
// gcd(a,b-a) = gcd(a-b,b) = gcd(a,b)