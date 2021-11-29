#include "Restaurant.h"

void main() {
	int n,count=0;
	int  a1 = 4, b1 = 3, c1 = 3;
	int total = 0;
	int seat = 0, turn = 0, ncount = 0;
	
	writeMyName("Aziz", "Ibrahim", 300918018);

	
	
	printf("pty  size Action        Free table(s) remaining");
	do{
		n = randomNumber(1, 8);
		count++;
		total += n; 

		switch (n) {
		case 8:
			turn += n;
			ncount++;
			printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 7:
			turn += n;
			ncount++;
			printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 6:
			c1 = (c1 - 1);

			if (c1 >= 0)

			{
				printf("\n%2i    %i   Seated        %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
				seat += n;
				break;
			}
			else
			if (c1 < 0)
				c1 = 0;
			turn += n;
			ncount++;
			printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 5:
			c1 = (c1 - 1);

			if (c1 >= 0)
			{
				printf("\n%2i    %i   Seated        %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
				seat += n;
				break;
			}
			else
			if (c1 <0)
				c1 = 0;
			turn += n;
			ncount++;
			printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 4:
			b1 = (b1 - 1);

			if (b1 >= 0)
			{	printf("\n%2i    %i   Seated        %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			seat += n;
			break;
		}
		else

			if (b1 < 0)
				b1 = 0;
				turn += n;
			    ncount++;
				printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 3:
			b1 = (b1 - 1);		
			
			if (b1 >= 0)
			{
				printf("\n%2i    %i   Seated        %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
				seat += n;
				break;
			}
			else
			if (b1 < 0)
				b1 = 0;
				turn += n;
			    ncount++;
				printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 2:
			a1 =( a1 - 1);

		
			if (a1 >= 0)
			{
				printf("\n%2i    %i   Seated        %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
				seat += n;
				break;
			}
			else
			if (a1 < 0)
				a1 = 0;
				turn += n;
			    ncount++;
				printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break;

		case 1:
			a1 =( a1 - 1);
			
			
			if (a1 >= 0)
			{
				printf("\n%2i    %i   Seated        %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
				seat += n;
				break;
			}
			else

				if (a1 < 0)
					a1 = 0;
			turn += n;
			ncount++;
			printf("\n%2i    %i   Turned away   %i table(s) for 2,  %i table(s) for 4,  %i table(s) for 6 ", count, n, a1, b1, c1);
			break; 
			
		}
		
		if ((a1 == 0) && (b1 == 0) && (c1 == 0))
			break;
	} while (1);



	printf("\n");

	printf("\nIn total: %i guests arrived in %i parties, \n", total, count);
	printf("          %i seated and %i (in %i parties) turned away\n", seat, turn, ncount);
}




