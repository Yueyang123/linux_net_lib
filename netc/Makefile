CC 		= gcc
CFLAGS	= -fpic -shared
INCLUDE =./
TARGET  =./libtcp_net_socket.so
SRC		=tcp_net_socket.c
OBJ		=$(patsubst %.c, %.o, $(SRC))
$(TARGET): $(OBJ)
	$(CC)  -o $@   $< $(CFLAGS)
$(OBJ):$(SRC)
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY : clean
clean:
	rm ./*.o ./*.so