int main()
{
     int n,i,fact;
     printf("Enter a number to calculate fectorial");
     scanf("%d",&n);
     for(i=1,fact=1;i<=n;i++)
     {
         fact*=i;
     }
     printf("The factorial of %d is %d",n,fact);
     getch();
     return 0;
}
