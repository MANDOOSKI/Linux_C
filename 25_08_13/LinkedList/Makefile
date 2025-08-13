# 컴파일러 및 컴파일 옵션
CC = gcc
CFLAGS = -I./header -g

# 빌드 디렉터리 (오브젝트 파일이 저장될 공간)
BUILD_DIR = build

# 모든 .c 파일의 경로를 명확하게 지정
SRC = main.c \
      List/InitList.c \
      List/PushBack.c \
      List/Release.c \
      string/strcmp.c \
      string/strcpy.c \
      string/strlen.c

# SRC 변수에 있는 .c 파일들을 BUILD_DIR 안의 .o 파일 경로로 변환
OBJ = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRC))

#---

# 기본 타겟: 실행 파일 'main'을 만듭니다.
all: main

# 'main' 타겟
main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

# 패턴 규칙: 모든 .c 파일을 .o 파일로 컴파일합니다.
# BUILD_DIR 내부에 소스 파일과 동일한 디렉터리 구조로 .o 파일을 생성합니다.
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

#---

# 'clean' 타겟: 빌드 파일을 모두 삭제합니다.
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) main
