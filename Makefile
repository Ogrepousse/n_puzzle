# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esusseli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/13 16:29:03 by esusseli          #+#    #+#              #
#    Updated: 2018/01/02 15:58:08 by esusseli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = n_puzzle
CXXFLAGS = -Wall -Wextra -Werror -g3
LDLIBS = -lft
LIBDIR = libft
SRCS = main.c
INCS = n_puzzle.h
SRCDIR = src
INCDIR = include
OBJDIR = obj
VPATH := $(INCDIR) $(LIBDIR)
OBJS := $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))
CPPFLAGS := $(addprefix -I,$(VPATH))
LDFLAGS := $(addprefix -L,$(LIBDIR))

all:	$(LIBDIR) $(NAME)

$(LIBDIR):
		@$(MAKE) -C $@

$(NAME):	$(OBJS)
		$(CC) $(LDFLAGS) $(OUTOUT_OPTION) $^ $(LDLIBS)

$(OBJS):	Makefile | $(OBJDIR)

$(OBJDIR):
		mkdir -p $@

$(OBJDIR)/%.o:	$(SRCDIR)/%.c $(INCS)
		$(CC) -c $(CXXFLAGS) $(CPPFLAGS) $(OUTPUT_OPTION) $<

clean:
		$(RM) -R $(OBJDIR)

fclean:	clean
		$(RM) -R $(NAME)

re:		fclean all

.PHONY: clean $(SUBDIRS)
