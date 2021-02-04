int main(void) {
  int n;
  printf("Enter the number of rows\n");
  scanf("%d",&n);
  int sp=n-1;
  int st=1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=sp;j++)
    {
      printf(" ");
    }
    for(int k=1;k<=st;k++)
    {
      printf("*");
    }
    if(sp>i)
    {
      sp=sp-1;
      st=st+2;
    }
        if(sp<i)
    {
      sp=sp+1;
      st=st-2;
    }
    printf("\n");
  }
  return 0;
}
