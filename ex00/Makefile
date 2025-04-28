# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rshaheen <rshaheen@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2025/04/28 16:21:48 by rshaheen      #+#    #+#                  #
#    Updated: 2025/04/28 16:29:32 by rshaheen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CPPFLAGS = -Wall -Wextra -Werror -std=c++11

CC = c++

OBJ_DIR = obj

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJECTS = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME) 

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "Object directory Created"
	
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@echo "Executable created: $(NAME)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "OBJECT FILES REMOVED"
	
fclean: clean
	@rm -f $(NAME)
	@echo "Executable Removed"

re: fclean all

.PHONY: all clean fclean re