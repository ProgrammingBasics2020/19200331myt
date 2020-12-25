#include <stdio.h>
#define ROW 3
#define COL 4
int main()
{
	int juzhen1[ROW][COL],juzhen2[COL][ROW];
	int i,j;
	printf(" ‰»Î‘≠æÿ’Û,");
	printf("%d*%d\n",ROW,COL);
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&juzhen1[i][j]);
		}
	}
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			juzhen2[j][i]=juzhen1[i][j];
		}
	}
	printf("◊™÷√æÿ’Û2,");
	printf("%d*%d:\n",COL,ROW);
	for(i=0;i<COL;i++){
		for(j=0;j<ROW;j++){
			printf("%8d",juzhen2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
