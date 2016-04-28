include config

all:
	make -C ./pthread_wrap
	make -C ./src

clean:
	make -C ./pthread_wrap clean
	make -C ./src clean