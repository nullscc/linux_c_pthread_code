include ../config

all:	${LIB_OBJS}
		ar rv my_pthread.a $?
		ranlib my_pthread.a

clean:
		rm -f *.o *.a
