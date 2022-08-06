#include <stdio.h>
int main(){
	int i,a[50],temp,k,n,j;
	scanf("%d",&n);
	scanf("%d",&k);
	
	for(i=1;i<=n;i++)
    {
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	
    	for(j=i+1;j<=n;j++)
        {
		    if(a[i]>a[j])
            {
				temp=a[i];
    			a[i]=a[j];
    			a[j]=temp; 
			}
		}
    }
    printf("%d",a[k]);
    return 0;
}
