int main()
{
    int i=1,n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i*i*i;
        i++;
    }
    printf("The cubes %d natural numbers is %d",n,sum);
    getch();
    return 0;
}
