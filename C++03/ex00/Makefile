 #===============================================================================#
#								SOURCES											  #
 #===============================================================================#

MAIN_DIR		= ./
CLASS_DIR		= ./classes/
CLAPTRAP_DIR	= $(CLASS_DIR)ClapTrap/

SRC_FILES = $(addprefix $(MAIN_DIR), main.cpp) \
			$(addprefix $(CLAPTRAP_DIR), ClapTrap.cpp) \

 #=============================================================================#
#									OBJETS										#
 #=============================================================================#

OBJS_DIR = objects
OBJS = $(SRC_FILES:%.cpp=$(OBJS_DIR)/%.o)
DEPS = $(SRC_FILES:%.cpp=$(OBJS_DIR)/%.d)

 #=============================================================================#
#									COMPILATION									#
 #=============================================================================#

CC = c++
CFLAGS = -g3 -std=c++98 -Wall -Wextra -Werror
CDFLAGS = -MMD -MP

 #=============================================================================#
#									MAKEFILE									#
 #=============================================================================#

NAME = ClapTrap

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(CLFLAGS) -o $(NAME)

$(OBJS_DIR) :
	mkdir $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)/$(SRCS_DIR)
	mkdir -p $(OBJS_DIR)/$(CLAPTRAP_DIR)

$(OBJS) : $(OBJS_DIR)/%.o : %.cpp
	$(CC) $(CFLAGS) $(CDFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)

re : fclean all

-include $(DEPS)

.PHONY: all clean fclean re

#.SILENT: