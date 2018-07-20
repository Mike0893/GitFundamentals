CXX = g++

SRC = mypgm.c

TARGET = Calculator

all:$(TARGET)

$(TARGET):$(SRC)
	$(CXX) $< -o  $@

clean:
	rm -rf $(TARGET)
