

# Compiler
CC = g++

# Compiler flags
CFLAGS = -w -Wl,-subsystem,windows

# Paths to third-party libraries
LIB_PATH = C:\i686-w64-mingw32\lib
INC_PATH = C:\i686-w64-mingw32\include

# Library names
LIBS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image

# Source files
SRCS = main.cpp game_obj.cpp game.cpp texture_render.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
HEADERS = $(wildcard *.hpp)

# Executable name
TARGET = ola.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -I$(INC_PATH) -L$(LIB_PATH) -o $@ $^ $(LIBS)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -I$(INC_PATH) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

# Include the custom library Makefile
# include C:\libraries\entityx\cmake
# include C:\libraries\entt/CMakeLists.txt