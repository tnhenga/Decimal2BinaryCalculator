// Name: Tanaka Nhenga 
// Use recursion to write a function that prints the binary equivalent of a non-negative integer. 
// dcml means decimal. this will be entered at the command

#include <stdio.h> 
#include <string.h> 
#include <math.h> 
 
 
int find(int dcml)  
{  
	// base case
	if (dcml == 0) // if a 0 is entered, a 0 is returned 
	return 0;

	else 
	// non base case
	// dclm%2 indentifies if there is a remainder or not
	return (dcml%2 + 10*find(dcml/2)); 
 
}  
int main()  
{  
	int dcml;
	// pgrm asks user for input
	printf("Please enter your decimal value: \n");
	
	// pgrm scans input 
	scanf("%d", &dcml); 
	
	// binary equivalent is outputted 
	printf("%d", find(dcml));
	return 0;  
} 