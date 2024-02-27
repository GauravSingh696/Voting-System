#include<stdio.h>

int bjp=0,congress=0,aap=0,bsp=0;
void electionResult()
{
	int wonByvote;
	if(bjp>congress&&bjp>aap&&bjp>bsp)
	{
		printf("\n**BJP won the election**\n\n");
		printf("total vote of BJP:%d\n",bjp);
		wonByvote=bjp-congress;
		printf("BJP won by %d vote to congress\n",wonByvote);
		wonByvote=bjp-aap;
		printf("BJP won by %d vote to App\n",wonByvote);
		wonByvote=bjp-bsp;
		printf("BJP won by %d vote to BSP\n",wonByvote);
	}
	else if (congress>aap&&congress>bsp)
	{
		printf("\n**congress won the election**\n\n");
		printf("total vote of congress :%d\n",congress);
		wonByvote=congress-bjp;
		printf("congress won by %d vote to BJP\n",wonByvote);
		wonByvote=congress-aap;
		printf("congress won by %d vote to AAP\n",wonByvote);
        wonByvote=congress-bsp;
        printf("congress won by %d vote to BSP\n",wonByvote);
	}
	else if (aap>bsp)
	{
	  printf("\n**AAp won the election**\n\n");
	  printf("total vote of AAP :%d\n",aap);
	  wonByvote=aap-congress;
	  printf("AAP won by %d vote to congress\n",wonByvote);
	  wonByvote=aap-bjp;
	  printf("AAP won by %d vote to bjp\n",wonByvote);
	  wonByvote=aap-bsp;
	  printf("AAP won by %d vote to bsp\n",wonByvote);

	}
	else if(bjp==congress&&bjp==aap&&bjp==bsp)
	{
	printf("\nNo one won the election\n\n");
	printf("  BJP---Congress---AAP---BSP\n");
	printf("Total vote %d %d %d %d\n",bjp,congress,aap,bsp);	
	}
	else
	{
	   printf("\n*** BSP won the election***\n\n");
	   printf("total vote of BSP :%d\n",bsp);
	   wonByvote=bsp-congress;
	   printf("BSP won by %d vote to congress\n",wonByvote);
       wonByvote=bsp-aap;
       printf("BSP won by %d vote to aap\n",wonByvote);
        wonByvote=bsp-bjp;
        printf("BSP won by %d vote to bjp\n",wonByvote);
	}
}

void calculatevote(int vote)
{
	switch (vote)
	{
		case 1:
			bjp+=1;
			break;
	    case 2:
	    	congress+=1;
	    	break;
	    case 3:
	    	aap+=1;
	    	break;
	    case 4:
	    	bsp+=1;
	    	break;
	}
}

void main()
{
	int choose;
	printf("\n********welcome to the simple voting system project********\n\n");
	printf("     mp election  \n\n");
	printf("******************\n");
	printf("   1.BJP   | 2.Congress  |\n");
	printf("******************\n");
	printf("   3.AAP   | 4.BSP       |\n");
	printf("******************\n\n");
	while(choose !=5)
	{
		printf("Press 1 to vote BJP\n");
		printf("Pressn 2 to vote Congress\n");
	    printf("Press 3 to vote AAP\n");
    	printf("Press 4 to vote BSP\n");
	    printf("Press 5 to show election result\n");
    	printf("Please choose :");
    	scanf("%d",&choose);
    	if (choose==5)
    	{
    		electionResult();
		}
		else
		{
			calculatevote(choose);
		}
		printf("\n");
	}
}