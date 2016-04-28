#include "my_pthread.h"

int Pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg)
{
	int err;
	err = pthread_create(thread, attr, start_routine, arg);
	if(err)
	{
		printf("pthread_create error, ERROR CODE:%d\n", err);	
		exit(1);
	}
	return err;
}
int Pthread_join(pthread_t thread, void **retval)
{
	int err;
	err = pthread_join(thread, retval);
	if(err)
	{
		printf("pthread_join error, ERROR CODE:%d\n", err);	
		exit(1);
	}
	return err;
}

int Pthread_attr_init(pthread_attr_t *attr)
{
	int err;
	err = pthread_attr_init(attr);
	if(err)
	{
		printf("pthread_attr_init error, ERROR CODE:%d\n", err);	
		exit(1);
	}
	return err;
}

int Pthread_attr_destroy(pthread_attr_t *attr)
{
	int err;
	err = pthread_attr_destroy(attr);
	if(err)
	{
		printf("pthread_attr_destroy error, ERROR CODE:%d\n", err);
		exit(1);
	}
	return err;
}


int Pthread_attr_getguardsize(pthread_attr_t *attr, size_t *guardsize)
{
	int err;
	err = pthread_attr_getguardsize(attr, guardsize);
	if(err)
	{
		printf("pthread_attr_getguardsize error, ERROR CODE:%d\n", err);
	}
	return err;
}

int Pthread_attr_getstacksize(pthread_attr_t *attr, size_t *stacksize)
{
	int err;
	err = pthread_attr_getstacksize(attr, stacksize);
	if(err)
	{
		printf("pthread_attr_setstacksize error, ERROR CODE:%d\n", err);
	}
	return err;
}

int Pthread_attr_getdetachstate(pthread_attr_t *attr, int *detachstate)
{
	int err;
	err = pthread_attr_getdetachstate(attr, detachstate);
	if(err)
	{
		printf("pthread_attr_getdetachstate error, ERROR CODE:%d\n", err);
	}
	return err;
}