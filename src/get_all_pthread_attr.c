#include "my_pthread.h"

int main()
{
	int err;
	pthread_attr_t pthread_attr;
	int detachstate;
	size_t stackguardsize, stacksize;
	void *stackaddr;
	
	Pthread_attr_init(&pthread_attr);
	printf("default pthread property:\n");
	printf("----------------------------\n");
	Pthread_attr_getdetachstate(&pthread_attr, &detachstate);
	printf("default detachstate:%d\n", detachstate);

	Pthread_attr_getstacksize(&pthread_attr, &stacksize);
	printf("default stacksize:%lu\n", stacksize);
	
	Pthread_attr_getguardsize(&pthread_attr, &stackguardsize);
	printf("default guardsize:%lu\n", stackguardsize);
	printf("----------------------------\n");
	
	Pthread_attr_destroy(&pthread_attr);

	exit(0);
}
