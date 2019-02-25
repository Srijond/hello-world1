#include<stdio.h>
int main()
{
    int n,i;
    float a=0,b=0,c=0,x,y,z;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(a[i]==0){
             b++;
             x=(float)b/n;
                 }
        else{
        if(a[i]>0){
            a++;
            y=(float)a/n;
        }
        else {
            c++;
            z=(float)c/n;
        }

        }
    }
    printf("%.6f\n%.6f\n%.6f\n",y,z,x);

    return 0;
}
