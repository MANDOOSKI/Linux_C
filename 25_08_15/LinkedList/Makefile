CC = gcc
CFLAGS = -I./headerCC = gcc
CFLAGS = -I./header -g
BUILD_DIR = build

# mysql_config / mariadb_config 자동 감지
MYSQL_CFLAGS := $(shell mysql_config --cflags 2>/dev/null || mariadb_config --cflags 2>/dev/null)
MYSQL_LIBS   := $(shell mysql_config --libs   2>/dev/null || mariadb_config --libs   2>/dev/null)

# 둘 다 없을 때 fallback (경로는 배포판에 따라 다를 수 있음)
ifeq ($(strip $(MYSQL_LIBS)),)
  CFLAGS += -I/usr/include/mysql
  MYSQL_LIBS = -L/usr/lib64/mysql -lmysqlclient -lz -lpthread -lm -ldl -lssl -lcrypto
endif

# 감지된 cflags 추가
CFLAGS += $(MYSQL_CFLAGS)

SRC = main.c \
      List/init.c \
      List/pushback.c \
      List/release.c \
      util/runmysql.c

OBJ = $(patsubst %.c, $(BUILD_DIR)/%.o, $(SRC))

all: main

main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(MYSQL_LIBS)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) main
