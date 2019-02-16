.PHONY:clean

RM = rm -rf
CC = gcc
COMPILEFLAG = -std=c99 -g
MKDIR = mkdir -p

OUT_DIR = out
OBJS_DIR = objs
SRC_DIR = src

DIRS = $(OUT_DIR) $(OBJS_DIR)
SRCS = $(wildcard $(SRC_DIR)/*.c)
SRCS := $(notdir $(SRCS))

OBJS = $(SRCS:.c=.o)
OBJS := $(addprefix $(OBJS_DIR)/,$(OBJS))

ELFILE = bubblesort

all:$(DIRS) $(ELFILE)

$(DIRS):
	$(MKDIR) $@

$(ELFILE):$(OBJS):
	$(CC) $(COMPILEFLAG) -o $(OUT_DIR)/$@ $^
$(OBJS_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(COMPILEFLAG) -o $@ -c $^

clean:
	$(RM) $(DIRS)
