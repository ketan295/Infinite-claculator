#include<stdio.h>

int add(a,b)
{
	return a+b;
}


int sub(a,b)
{
	return a-b;
}

int mul(a,b)
{
	return a*b;
}

int div(a,b)
{
	return a/b;
}

int mod(a,b)
{
	return a%b;
}


main()
{
	int a,b;
	int choice;
	int i;

	printf("0->Exit\n");
	printf("1->Addition\n");
	printf("2->Substraction\n");
	printf("3->Multiplication\n");
	printf("4->Division\n");
	printf("5->modulas\n");
	

	do
	{
			 
	    printf("\nEnter value of a: ");
     	scanf("%d",&a);
	
    	printf("\nEnter value of b: ");
     	scanf("%d",&b);
     	
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		
	   switch(choice)
	   {
	   
		
		case 1:
			{
				printf("a+b=%d",add(a,b));
				break;
			}
		case 2:
		    {
        		printf("a-b=%d",sub(a,b));
		    	break;
			}
		case 3:
			{
				printf("a*b=%d",mul(a,b));
				break;
			}
		case 4:
			{
				printf("a/b=%d",div(a,b));
				break;
			}
		case 5:
			{
				printf("a%b=%d",mod(a,b));
				break;
			}
		default :
			{
				printf("Please enter correct value :");
			}
	   }
	}
	while(choice!=0);
	if (choice==0)
	{
		exit(0);
	}

}
