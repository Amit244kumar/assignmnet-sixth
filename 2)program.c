int main()
{
    int n,sum=0,i=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i*2;
        i++;
    }
    printf("%d",sum);
    getch();
    return 0;
}
