int super(long long int num)
{
    if(num<=9)
    {
        return num;
    }
    long long int sum=0;
    long long int m=0;

    while(num!=0)
    {
        
        m=num%10;
        sum=sum+m;
        num=num/10;
    }
    return super(sum);
}

// Complete the superDigit function below.
int superDigit(string n, int k) 
{
    long long int sum=0;
    
    for(int i=0; i<n.size(); i++)
    {
        sum += n[i] - '0';
    }

    return super(sum*k);

}
