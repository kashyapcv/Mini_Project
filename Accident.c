#include<stdio.h>
struct death
{ int a;
}k[100];
void kashap(struct death e[],int s);
int main()
{ int i,n;
  char s[100];
  printf("Enter the Total no. of places to your Gonna Verify the Accidental Prone or not:-\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { printf("Enter the no.of deaths occured per year in place %d: ",i+1);
    scanf("%d",&k[i].a);
  }
  kashap(k,n);
  return 0;
}
void kashap(struct death e[],int s)
{ int i;
  printf("Results:-\n");
  for(i=0;i<s;i++)
  {  if(e[i].a>66000)
        printf("Place %d is accidental prone area\n",i+1);
     else 
        printf("Place %d is not accidental prone area\n",i+1);
  }
  
}