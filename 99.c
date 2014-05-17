#include<stdio.h>

void main()
{
	printf("<!DOCTYPE html>\n");
	printf("<meta charset = \"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<h1>99</h1>\n");
	printf("<table>\n");
	printf("<tr>\n");

	printf("<th>  ");
	for(int i = 1; i < 10; ++i){
		printf("<th>%2d",i);
	}
	printf("<tr>\n");

	for(int j = 1 ; j < 10 ; ++j){
		
		printf("<th>%2d",j);

		for(int k = 1 ; k < 10 ; ++k){
			
			printf("<th>%2d", j*k);
		}

		printf("<tr>\n");
	}
}