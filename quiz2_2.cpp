#include <stdio.h>
#include <string.h>
int main()
{
	int x,y,i,j,k;
	scanf("%d %d", &x, &y);
	int n[y][x];
	char str[5000]={'o'},set[70]={'x'};
	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
			scanf("%d", &n[i][j]);
		}
	}
	for(i=0 ; i<x; i++){
		for(j=0; j<70; j++){
			printf("%c",str[i]);
		}
	}
	
	return 0;
}
