// #include<stdio.h>
// void fact(int *num);
// int main()
// {
//     int i,fact,num;
//     printf("enter number to find its factorial:");
//     scanf("%d",&num);
//     for(i=0;i<=num;i++)
//     {
//         fact(&num);
//     }
//     printf("%d",num);
    
// }
// void fact(int *num)
// {
//     int i,fact=1;
//     fact=i*(*num);

// }

// ===============================================================================================

// #include<stdio.h>
// int main()
// {
//     int i,fact=1,num;
//     printf("enter number to find its factorial :  ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         fact=fact*i;
        
//     }
//     printf("%d",fact);
// }

//===============================================

// #include<stdio.h>
// void fact(int *a,int *f);
// int main()
// {
//     int a ,f=1;
//     printf("enter a number:");
//     scanf("%d",&a);
//     fact(&a,&f);
//     printf("%d",f);

// }
// void fact(int *a,int *f)
// {
//     int i;
//     for(i=0;i<=*a;i++)
//     {
//         *f=(*f)*i;
//     }
    
// }

//====================================================================

// #include<stdio.h>
// int fact(int *f,int *i);
// int main()
// {
//     int i,f=1,a;
//     printf("enter number:");
//     scanf("%d",&a);
//     for(i=0;i<=a;i++);
//     {
//         fact(&f,&i);
//     }
//     printf("%d",f);
// }
// int fact(int *f,int *i)
// {
//     int f=1,i;
//     f=(*f)*(*i);
//     return f;
// }

//==================================================================

#include<stdio.h>
void fact(int num);
int main(){
    int num;
  printf("enter a number :");
  scanf("%d",&num);
    fact(num);
    return 0;
}
void fact(int num)
{
    int i,f=1;
    if(num==0)
    {
        printf("factorial of %d is 1",num);
    }
    else if(num<0)
    {
        printf("invalid input! please enter positive numbers.");
    }
    else {
        for(i=1;i<=num;i++)
        {
            f=f*i;
        }
      printf("%d",f);
    }    
      
}