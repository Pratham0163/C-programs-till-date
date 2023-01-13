#include<stdio.h>





int main()
{
	int mat[3][3]={1,2,3,7,8,9,4,5,6};



	int i,j;
	for(i=0;i<3;i++)
	{
	 printf("\n");
	 for(j=0;j<3;j++)
	 {
	    printf("%d ",mat[i][j]);
	  }
	}


	int aux; //this variable will store the largest value in a particular column
	int aux_row; //this variable will store the largest value in a particular row
	for(j=0;j<=0;j++)
	{
		for(i=0;i<3;i++)
		{
			if(i==0)
			 {
				aux=mat[i][j];
				aux_row=i;
				}
			else
			{

				if(mat[i][j]>aux)
				{
					aux=mat[i][j];
					aux_row=i;
				}
			}
		}
	}

	printf("\n Element %d is the highest  in the %d th column which is located at %d th row\n", aux,0,aux_row);
	int aux2;
	int aux2_column;
	for(j=0;j<3;j++)
	{
		if(j==0)
			{
			aux2=mat[aux_row][j];
			aux2_column=j;
			}
		else
		{		
		if(mat[aux_row][j]<aux2)
		 {
			aux2=mat[aux_row][j];
			aux2_column=j;
		 } 
		
		}
	}

	if(aux2==aux && aux2_column==0)
		printf("saddle point exist and it is mat[%d][%d]=%d",aux_row,aux2_column,mat[aux_row][aux2_column]);
	else
	   printf("saddle point does not exist max in column mat[%d][%d]=%d and min in row is mat[%d][%d]=%d ",aux_row,0,aux,aux_row,aux2_column,aux2);


return 1;
}