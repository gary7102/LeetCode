# 定義變數
CC = gcc
CFLAGS = -o
TARGET = test.exe
SRC = test.c test_header.c

# 主要目標
# all: $(TARGET)

# # 編譯規則
# $(TARGET): $(SRC)
# 	$(CC) $(SRC) -o $(TARGET) 
all:
	$(CC) -o test test.c test_header.c

# 清理目標
clean:
	rm -f $(TARGET)
