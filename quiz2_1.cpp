#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,j,k,c=0,sum=0;
    scanf("%lld", &n);
    long long int x[100]={0},i;
    //??? Not cube number
    for(i=0; i<n; i++){
    	sum=sum+8;
        x[i]=sum;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        	if(x[j]==n){
        		c=1;
        		break;
			}
		}
    }
    if(c==1){
    	printf("Not Cube Free");
	}else if(n<9){
		printf("%lld",n);
	}else{
		printf("%lld",n-1);
	}
    

    return 0;
}

