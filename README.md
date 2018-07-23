/**
 * @input x : Integer
 * @input n : Integer
 * @input d : Integer
 * 
 * @Output Integer
 */
int powmod(int x, int n, int d) {
    long long s=1, t=x;
        if(x==0){
        return 0;
    }
    if(n==0)//pow is zero
    {
        return 1%d;
    }
    while(n>0)
    {
        if(n%2==1) //pow is odd
        {
        s=(s*t)%d;
        n--;
    }
    else //pow is even 
    {
        t=(t*t)%d;
        n=n/2;
    }
    }
    if(s<0)
{
    s=(s+d)%d;
}
return s;
}
