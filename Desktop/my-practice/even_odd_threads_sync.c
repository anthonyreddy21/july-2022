


#include<stdio.h>
#include<pthread.h>

pthread_mutex_t m_lock;
int i=1;

void *print_even(void *n)
{    
	int *num=(int *)n;
	
	while(i <= num)
	{
		if((i%2) == 0)
		{
			pthread_mutex_lock(&m_lock);
			printf("%d ",i++);
		}
		else
			pthread_mutex_unlock(&m_lock);
	}
	
}

void *print_odd(void *n)
{
	
	int *num=(int *)n;
    
	while(i <= num)
    {
        if((i%2) != 0)
		{
			pthread_mutex_lock(&m_lock);
			printf("%d ",i++);
		}
		else
			pthread_mutex_unlock(&m_lock);
	}

}


int main()
{

	pthread_t t1,t2;
	pthread_mutex_init(&m_lock,NULL);
	
	int n;
	
	printf("enter value of n(range)\n");
	scanf("%d",&n); 

	pthread_create(&t1,NULL,&print_even,(void *)n);
	pthread_create(&t2,NULL,&print_odd,(void *)n);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}


