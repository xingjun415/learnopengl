CC = g++
CFLAGS = -g -Wall -std=c++11
PROJECT_ROOT_DIR = ../../../
THIRTY_PARTY_DIR = $(PROJECT_ROOT_DIR)/third_party
LIBS = -lGLEW -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lXxf86vm -lXinerama -lXcursor
INCLUDES = -I$(PROJECT_ROOT_DIR)include -I$(THIRTY_PARTY_DIR) -I../../

SRC_DIR = $(PROJECT_ROOT_DIR)/src
LIB_DIR = $(SRC_DIR)/build
THIRTY_PARTY_LIB = $(LIB_DIR)/glad.o $(LIB_DIR)/stb_image.o $(LIB_DIR)/shader.o

TARGET = material

$(TARGET): $(TARGET).o $(THIRTY_PARTY_LIB)
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).o $(THIRTY_PARTY_LIB) $(LIBS)

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp $(INCLUDES)

$(THIRTY_PARTY_LIB):
	cd $(SRC_DIR) && $(MAKE)

.PHONY: clean
clean:
	- rm $(TARGET) *.o
	cd $(SRC_DIR) && $(MAKE) clean