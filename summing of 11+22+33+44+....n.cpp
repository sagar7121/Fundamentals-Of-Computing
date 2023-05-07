#include <stdio.h>
int main(){
	int n, sum=0;
	printf("enter the number of terms:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		sum+=(11*i);
	}
	printf("%d", sum);
}