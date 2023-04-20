/*dynamic memory location
memory is located at run time
1)malloc()
2)calloc()
3)realloc()
4)free()
memory leakage
       
	                                            // 1)malloc()
    /*#include<stdio.h>
    #include<stdlib.h>
	main()
	{
	int*p,i;
	p=(int*)malloc(10*sizeof(int));
   
for(i=0;i<10;i++)
{
   scanf("%d",p+i);
}
for(i=0;i<10;i++)
{
  printf("%d",*(p+i));
}
free(p) ;
  }*/
                                        //2)calloc
       /* #include<stdio.h>                                
		#include<stdlib.h>
		main()
    {
    	int *p,i,null;
    	p=(int*)calloc(10,sizeof(int));
    	if(p==null)
    	{
    		printf("exit");}
    		else
    		{
			
    	     for(i=0;i<10;i++)
    	    {
    		scanf("%d",p+i);
    		
		    }
		}
		    for(i=0;i<10;i++)
		    {
		    	printf("%d",*(p+i));
			}
		
		free(p);
    	
	}*/
	                                          //3)realloc
	          #include<stdio.h>
			  #include<stdlib.h>
			  main()
			  {
			  	int *p,i;
			  	p=(int*)malloc(5*sizeof(int));
			  	for(i=0;i<5;i++)
			  	{
			  	 scanf("%d",p+i);	
				}
				p=(int*)realloc(p,8*sizeof(int));
				for(i=5;i<8;i++)
				{
					scanf("%d",p+i);
				}
				for(i=0;i<8;i++)
				{
					printf("%d",*(p+i));
				}
				 free(p); 
											  }                               

