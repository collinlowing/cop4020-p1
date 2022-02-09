CXX = gcc
CXXFLAGS = -Wall

OBJS = HashTable.o main.o

app : ${OBJS}
	${CXX} $(CXXFLAGS) -o $@ ${OBJS}

main.o : main.c HashTable.h
HashTable.o: HashTable.c HashTable.h

clean :
	rm ${OBJS} app