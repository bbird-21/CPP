# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:59:31 by mmeguedm          #+#    #+#              #
#    Updated: 2023/10/17 10:10:38 by mmeguedm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --------- Prerequisites ------------------------------------------------------

NAME		= AMateria

CC			= g++
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3

# --------- Sources files -----------------------------------------------------------

SRCS =	main.cpp		\
		AMateria.cpp	\
		Cure.cpp		\
		Character.cpp	\
		Ice.cpp			\
		MateriaSource.cpp

# --------- Compiling ---------------------------------------------------------------

OBJ		= ${SRCS:.cpp=.o}

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c $<
	@printf "%-60s\r" "Compiling $<"

# --------- Linking -----------------------------------------------------------------

$(NAME) :  $(OBJ)	
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@printf "\n\n"
	@echo "\033[1;32mCompilation done\033[0m"

# --------- Phony targets -----------------------------------------------------------

all :	$(NAME)

wf :	$(NAME)

wf : CPPFLAGS = -Wall -Wextra -g3

clean :
	@rm -rf $(OBJ)
	@echo "Deleting objects files"

fclean : clean
	@rm -rf $(NAME)
	@echo "Deleting binary file"

re : fclean $(NAME)

.PHONY : all clean fclean re
