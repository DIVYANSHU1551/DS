//Brute  T-O(n)
int power (int x,int n)
{
    int res=1;
    for(int i =0;i<n;i++)
    res=res*x;
    return res;
}
//Efficient   T-O(log n)
int power (int x,int n)
{
    if(n==0)
    return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else 
    return temp*x;
}

//Iterative Power Binary Exponentiation
int power(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0)
        res=res*x;
        x=x*x;
        n=n/2;
    }
    return res;
}