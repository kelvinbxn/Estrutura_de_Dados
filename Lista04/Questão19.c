#include <stdio.h>
#define n 6
/*
*/
int main(){
	int v[n][n], i, j;

	for(i = 0; i < n; i++){
		for(j = 0;j < n; j++){
			if(i==1 &&  0 < j && j < 5){
				v[i][j] = 2;
			} else if(i==2 &&  0 < j && j < 5  ){
				v[i][j] = 2;
				if(j == 2 || j == 3){
					v[i][j] = 3;
				}
			} else if(i==3 &&  0 < j && j < 5  ){
				v[i][j] = 2;
				if(j == 2 || j == 3){
					v[i][j] = 3;
				}
			} else if(i==4 &&  0 < j && j < 5){
				v[i][j] = 2;
			}
			else {
				v[i][j] = 1;
			}
		}
	}

	for(i = 0; i < n; i++){
		for(j = 0;j < n; j++){
			printf("%d ",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
