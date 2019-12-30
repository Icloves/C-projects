int main()
{
	int k = 3;
	int *pointer = (int*)malloc(1*sizeof(int));
//	printf("%s\n", sizeof(pointer));
	free(pointer);
	printf("%lu\n", sizeof(*pointer));
	printf("%lu\n", sizeof(&pointer));
	printf("%lu\n", sizeof(pointer));
	return 0;
}
