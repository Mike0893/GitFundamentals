CXX = g++

SRC = calcPgm.c

TARGET = Calculator

all:$(TARGET)

$(TARGET):$(SRC)
	$(CXX) $< -o  $@

clean:
	rm -rf $(TARGET)
