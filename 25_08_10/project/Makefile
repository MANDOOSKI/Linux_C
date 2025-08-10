CC = gcc
CFLAGS = -I./header -g
LIBRARY = ./library
SRC = main.c \
      $(LIBRARY)/strcmp/strcmp.c \
      $(LIBRARY)/strlen/strlen.c \
      $(LIBRARY)/strcpy/strcpy.c

OBJ = $(SRC:.c=.o)

all : main

main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o main
CC = gcc
CFLAGS = -I./header -g
LIBRARY = ./library

# 소스 파일 경로
SRC = main.c \
      $(LIBRARY)/strcmp/strcmp.c \
      $(LIBRARY)/strlen/strlen.c \
      $(LIBRARY)/strcpy/strcpy.c

# 오브젝트 파일 경로 (소스 파일에서 .o 파일로 확장)
OBJ = $(SRC:.c=.o)

# 기본 타겟 (all)
all: main

# main 타겟, 오브젝트 파일을 컴파일하여 실행 파일을 생성
main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o main

# 소스 파일을 오브젝트 파일로 변환
$(LIBRARY)/%.o: $(LIBRARY)/%.c
	@mkdir -p $(dir $@)  # 오브젝트 파일을 저장할 디렉토리 자동 생성
	$(CC) $(CFLAGS) -c $< -o $@

# clean 타겟, 오브젝트 파일과 실행 파일 삭제
clean:
	rm -f $(OBJ) main

$(LIBRARY)/%.o: $(LIBRARY)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) main

