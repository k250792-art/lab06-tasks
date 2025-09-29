#include<stdio.h>
int main()
{
	char first, last;
	
    printf("Enter first letter of a country: ");
    scanf("%c",&first);
    
    switch(first)
    { 
    	case 'a':
    		case 'A':
    			printf("Enter last letter of a country: ");
    			scanf(" %c",&last);
    			switch(last)
    { 
    	case 'a':
    		case 'A':
    		printf("\nAlbania\nAlgeria\nAmerica");
    		break;
    		default:
    			printf("No such country");
    		}
    		break;
    		
    		case 'b':
    			case'B':
    			printf("Enter last letter of a country: ");
    			scanf(" %c",&last);
    			switch(last)
    { 
    	case 'a':
    		case 'A':
    		printf("\nBulgeria\nBotswana\nBolivia");
    		break;
    		default:
    			printf("No such country");
    		}
    		break;
    		default:
    			printf("Please enter correct letter");
	}
	return 0;
}
