/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


struct Point {

	int x;
	int y;
};

struct Polygon {

	int num_of_points;

	struct Point* p;
	
};
	


int main()
{

	struct Point p1 = { 1,1 };
	struct Point p2 = { 2,2 };
	struct Point p3 = { 3,3 };

	struct Polygon gon;
	


	printf("How much points ?\n");
	scanf("%i", &gon.num_of_points);

	gon.p = (struct Point*)malloc(gon.num_of_points*sizeof(struct Point));
	
	gon.p[0] = p1;
	gon.p[1] = p2;
	gon.p[2] = p3;
	printf("%i points \n", gon.num_of_points);
	system("pause");

	return 0;

}

