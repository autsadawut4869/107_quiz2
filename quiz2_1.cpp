#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,j,k=0,c=0,sum=0;
    scanf("%lld", &n);
    long long int x[n],i,y[n];
    for(i=0; i<n; i++){
    	sum=sum+8;
    	y[i]=i+1;
        x[i]=sum;
    }
    for(i=0; i<n; i++){
        if(x[i]==n){
        	c=1;
        	break;
		}
    }
    for(i=0; i<n; i++){
    	for(j=0; j<n; j++){
    		if(y[i]==x[j]){
    			k++;
			}
		}
    	
	}
    if(c==1){
    	printf("Not Cube Free");
	}else{
		printf("%lld",n-k);
	}
    

    return 0;
}

