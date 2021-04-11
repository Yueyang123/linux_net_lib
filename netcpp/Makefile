CXX 	= g++
CFLAGS	= -fpic -shared
INCLUDE =./
TARGET  =./libtcp_net_socket.so
SRC		=tcp_net_socket.cpp
OBJ		=$(patsubst %.cpp, %.o, $(SRC))
$(TARGET): $(OBJ)
	$(CXX)  -o $@   $< $(CFLAGS)
$(OBJ):$(SRC)
	$(CXX) -o $@ -c $< $(CFLAGS)

.PHONY : clean
clean:
	rm ./*.o ./*.so