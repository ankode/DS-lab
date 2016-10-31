/*author- Ankush Anshuman

sum of two elements

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m,n,*p,*q;
    p = &m;
    q=&n;
	do{
    printf("Enter the two numbers :\n");
    scanf("%d%d",p,q);
	int sum=*p+*q;
        
        printf("sum is %d", sum);
		printf("to add more no. enter 1 else enter 0");
		int flag;
		scanf(%"d",flag);
	}while(flag!=0);
	
    return 0;
}
