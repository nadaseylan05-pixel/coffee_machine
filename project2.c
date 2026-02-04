# include <stdio.h>
# include <ctype.h>
int main()
{
	printf("COFFEE MACHINE:\n");
	
	char cof_type;
	int sugar;
	
	
	while(1)
	{
	
	printf("\nChoose type of these by tiping the first letter:\n\t "); 
	
	printf("\n\t LATTE\n\t CAPPUCCiNO \n\t ESPRESSO \n\t AMERiCANO\n\t ");
	scanf(" %c",&cof_type);
	cof_type=toupper(cof_type);
	if(cof_type=='L' || cof_type=='C' || cof_type=='E'  || cof_type=='A' )
	break;
	else
		printf("Unvilable choice");
	
		
	}
	
	
	
	while(1)
	{
		printf("How many cube of sugar you want?");
		if (scanf("%d",&sugar)!=1)
		{
			while (getchar() != '\n' );
			printf("YOU HAVE TO ENTER NUMBER!\n ");
		continue;
		}
		if  (sugar< 0)
			printf("IT CANNOT BE NEGATIVE!\n");
		else 
				
	
			if (cof_type=='L')
			{
			
				 
				 
				printf("HERE YOUR LATTE WITH %d SUGAR.\n"  ,sugar );
				break; 
				
			}
			else if (cof_type=='C')
			{
			
				 
				 
				printf("cWiTH %d SUGAR.\n"  ,sugar );
				break;  
				
				
			}
			else if (cof_type=='E')
			{
			
				 
			
				printf("HERE YOUR ESPRESSO WiTH %d SUGAR."  ,sugar );
				break;  
			
			}
			else if (cof_type=='A')
			{
		
				
			 
				printf("HERE YOUR AMERiCANO WiTH %d SUGAR."  ,sugar );
				break;  
				
			}
	}
			
 
	

	
	return 0;

}

