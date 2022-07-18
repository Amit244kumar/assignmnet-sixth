int main()
{
    int i=2,num1,num2,f=1,c=0,b=0;
    printf("Enter two numbers:");             // num1 num2  f  c b  i
    scanf("%d%d",&num1,&num2);                //  1    1    36  1 0  3;

    while(i)
    {
        if(num1==1&&num2==1)
             break;
        if(num1%i==0&&num2%i==0)
        {
            f*=i;
            num1/=i;
            num2/=i;
        }
        if(num1%i==0)
        {
            f*=i;
            num1/=i;
        }
        else
        {
            c=1;
        }
        if(num2%i==0){
            f*=i;
            num2/=i;

        }
        else{
            b=1;
        }
        if(c==1&&b==1)
        {
            i++;
            c=0;
            b=0;
        }
    }

    printf("The LCM is %d",f);
    getch();
    return 0;
}
