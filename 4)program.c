int main()
{
    int i=1,sum=0,n;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        sum+=i*i;
        i++;
    }
    printf("\nThe square of %d naturals numbers is %d",n,sum);
    getch();
    return 0;
}
