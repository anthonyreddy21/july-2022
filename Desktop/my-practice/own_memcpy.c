
// WAP to implement your own Memcpy function

void *my_Memcpy(void *s1, const void *s, unsigned int n) 
{
	char *dest=(char *)s1;
	const char *src=(const char *)s;
	
	for (int i=0; i<n; i++) 
       dest[i] = src[i]; 
	
	return dest;
} 

int main()
{
    char src[100],dest[100];
    
    printf("enter a string\n");
    scanf("%s",src);
   
    my_Memcpy(dest, src, strlen(src)+1);
    printf("The copied string is %s\n", dest);
    
	return 0;	
	
}
