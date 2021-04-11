CC 		= gcc
CFLAGS	= -L /usr/lib -ltcp_net_socket
INCLUDE =-I./
TARGET  =clint
SRC		=clint.c
OBJ		=$(patsubst %.c, %.o, $(SRC))
$(TARGET): $(OBJ)
	$(CC)  -o $@   $< $(CFLAGS) $(INCLUDE)
$(OBJ):$(SRC)
	$(CC) -o $@ -c $< $(CFLAGS)	$(INCLUDE)

.PHONY : clean
clean:
	rm ./*.o 