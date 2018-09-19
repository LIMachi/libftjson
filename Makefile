AUTHOR = hmartzol

NAME = libftjson.a

SRCDIR = src
INCDIRS = inc
OBJDIR = .obj
MAIN = src/test.c

CFLAGS = -Wall -Wextra -Werror -g
PINC = ../libft/inc
CLIB = ../libft
LIB = ../libft/libft.a

include ../Makefiles/Makefile.gen
