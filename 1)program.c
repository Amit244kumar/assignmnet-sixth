int main()
{
    int n,i=1,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
    getch();
    return 0;
}
