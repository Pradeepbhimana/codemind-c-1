#include<stdio.h>
int main()
{
    int n,i,j,m,s=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
                s=s+arr[i][j];
        }
        printf("%d ",s);
    }

}