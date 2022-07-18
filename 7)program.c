int main()
{
    int n,i=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n)
    {
        n/=10;
        i++;
    }
    printf("The total digit is %d",i);
    getch();
    return 0;
}
