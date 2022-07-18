int main()
{
    int n,i=1,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*2-1);
        sum+=i*2-1;
        i++;
    }
    printf("%d",sum);
    getch();
    return 0;
}
