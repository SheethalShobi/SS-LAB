#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
    int f[50],p,i,j,k,a,st,len,n,c;

    for(i=0;i<50;i++)
        f[i]=0; //initialize all blocks to 0 (unallocated)


    printf("Enter how many blocks that are already allocated :");
    scanf("%d",&p);
    if(p!=0)
    {
        printf("\nEnter the blocks no.s that are already allocated :");
        for(i=0;i<p;i++)
        {
            scanf("%d",&a);
            f[a]=1; //allocate the blocks
        }
    }
    
    //X:

    do{
        printf("Enter the starting index block & length :");
        scanf("%d%d",&st,&len);
        k=len;

        for(j=st;j<(k+st);j++)
        {
            if(f[j]==0)
            {
                f[j]=1;
                printf("\n%d->%d",j,f[j]);
            }
            else
            { 
                printf("\n %d-  >file is already allocated",j);
                k++;
            }
        }
        
        printf("\n If u want to enter one more file? (yes-1/no-0)");
        scanf("%d",&c);
    }while(c==1);
    
}