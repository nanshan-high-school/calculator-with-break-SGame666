#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() 
{
int total,a;
  total=0;
  for(int i=1;i>0;i++)
  {
     printf("輸入數字:");
     cin>>a;
     total=a+total ;
     if (a==0)
  {
       break;
  }
  }
  printf("總和:%d",total);
}
