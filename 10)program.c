int main()
{
    int i,n,b=0;
    printf("Enter the number:");      //125  i  b
    scanf("%d",&n);                    //0   1  521
    while(n)
    {
      i=n%10;
      n/=10;
      if(n)
      {
        b=(b+i)*10;
      }
      else{
        b=(b+i);
      }
    }
    printf("The reverse number is %d",b);
    getch();
    return 0;
}
