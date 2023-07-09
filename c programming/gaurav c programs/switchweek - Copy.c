#include<stdio.h>
main()
{
	int choice;
	printf("enter your choice between 1-7");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("monday\n");
				break;
		    }
		    
	
	    case 2:
			{
				printf("tuesday\n");
				break;
		    }
	    case 3:
			{
				printf("wednesday\n");
				break;
		    }
		case 4:
			{
				printf("thursday\n");
				break;
		    }
		    
		case 5:
			{
				printf("friday\n");
				break;
		    }
		case 6:
			{
				printf("satarday\n");
				break;
		    }
		case 7:
			{
				printf("sunday\n");
				break;
		    
			}
		}
}
