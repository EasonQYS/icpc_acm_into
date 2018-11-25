#include<stdio.h>

void qs(int a[],int L,int R)
{
    int l=L,r=R,t;
    if (L>=R) return;
    t=a[l];
    while(l<r)
    {
        while(l<r&&a[r]>=t) r--;
        a[l]=a[r];
        while(l<r&&a[l]<=t) l++;
        a[r]=a[l];
    }
    a[l]=t;
    qs(a,L,l-1);
    qs(a,l+1,R);

}

int main()
{
    int n;
    int a[1000];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qs(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
