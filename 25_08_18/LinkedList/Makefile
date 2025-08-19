# Compiler & flags
CC       = gcc
CFLAGS  := -g -O2 -std=c11 -Wall -Wextra -Wpedantic -I./header -MMD -MP
BUILD_DIR = build

# 소스 목록 (pushi_back.c가 오타면 push_back.c로 바꿔)
SRC = \
  main.c \
  list/push_back.c \
  list/print_all.c \
  list/init.c \
  list/release.c

# 오브젝트/디펜던시
OBJ = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRC))
DEP = $(OBJ:.o=.d)

# 기본 타깃
all: main

# 링크
main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

# 컴파일
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# 청소
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) main

# 헤더 의존성 포함
-include $(DEP)
                       
