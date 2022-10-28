# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnard <tnard@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 13:15:12 by tnard             #+#    #+#              #
#    Updated: 2022/10/28 13:38:04 by tnard            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLU			= \033[0;34m
GRN			= \033[0;32m
RED			= \033[0;31m
RST			= \033[0m
END			= \e[0m

SRCS		= main.cpp Course.cpp Professor.cpp Student.cpp School.cpp Person.cpp
NAME		= course
OBJS_DIR	= objs/
PROJECT_H	= Course.hpp Professor.hpp Student.hpp School.hpp Person.hpp
OBJS		= $(SRCS:.cpp=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
CC			= g++
CC_FLAGS	= 

$(OBJS_DIR)%.o : %.cpp $(PROJECT_H)
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)srcs
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@printf	"\033[2K\r${BLU}[BUILD]${RST} '$<' $(END)"

$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS)
	@printf "\033[2K\r\033[0;32m[END]\033[0m $(NAME)$(END)\n"

all: $(NAME)


clean:
	@rm -rf $(OBJS_DIR)
	@printf "\033[2K\r${GRN}[CLEAN]${RST} done$(END)"

fclean: clean
	@rm -f $(NAME)
	@printf "\033[2K\r${GRN}[FCLEAN]${RST} done$(END)"

re: fclean all

.PHONY:		all clean fclean re