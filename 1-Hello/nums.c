#include <stdio.h>
#include <limits.h> 
int main(void) {
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); 
	printf("Min: %d\n", CHAR_MIN);

	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); 
	printf("Min: %d\n", SHRT_MIN);

	unsigned short int ushort = 1234U; 
	printf("\nunsigned short int:\n");
	printf("Value: %u\n", ushort);
	printf("Max: %u\n", USHRT_MAX); 

	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); 
	printf("Min: %d\n", INT_MIN);

	unsigned int uint = 12345U;  
	printf("\nunsigned int:\n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX);

	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX); 
	printf("Min: %ld\n", LONG_MIN);

	unsigned long int ulong = 123456789L; 
	printf("\nunsigned long int:\n");
	printf("Value: %ld\n", ulong);
	printf("Max: %ld\n", ULONG_MAX); 

	return 0;
}