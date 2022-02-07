CXX = gcc
CXXFLAGS = -Wall

OBJS = main.o

app : ${OBJS}
	${CXX} $(CXXFLAGS) -o $@ ${OBJS}

main.o : main.c

clean :
	rm ${OBJS} app