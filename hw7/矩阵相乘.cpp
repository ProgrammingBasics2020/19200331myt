#include<stdio.h>
#include<stdlib.h> 
#define ROW 3
#define COL 3
#define MID 4
int main()
{
	int juzhen1[ROW][COL],juzhen2[ROW][COL],juzhen3[ROW][COL];
	int i,j,m;
	printf(" ‰»Îæÿ’Û1,");
	printf("%d*%d",ROW,COL);
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&juzhen1[i][j]);
		}
	}
	printf(" ‰»Îæÿ’Û2,");
	printf("%d*%d",ROW,COL);
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&juzhen2[i][j]);
		}
	}
	printf("æÿ’Û3:\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			int sum=0;
			for(m=0;m<MID;m++){
				sum=sum+juzhen1[i][m]*juzhen2[m][j];
			}
			juzhen3[i][j]=sum;
		}
	}
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%3d",juzhen3[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
 } 
