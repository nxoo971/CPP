 #===============================================================================#
#								SOURCES											  #
 #===============================================================================#

MAIN_DIR		= ./
CLASS_DIR		= ./classes/
CLAPTRAP_DIR	= $(CLASS_DIR)ClapTrap/
SCAVTRAP_DIR	= $(CLASS_DIR)ScavTrap/
FRAGTRAP_DIR	= $(CLASS_DIR)FragTrap/
DIAMONDTRAP_DIR	= $(CLASS_DIR)DiamondTrap/

SRC_FILES = $(addprefix $(MAIN_DIR), main.cpp) \
			$(addprefix $(CLAPTRAP_DIR), ClapTrap.cpp) \
			$(addprefix $(SCAVTRAP_DIR), ScavTrap.cpp) \
			$(addprefix $(FRAGTRAP_DIR), FragTrap.cpp) \
			$(addprefix $(DIAMONDTRAP_DIR), DiamondTrap.cpp) \

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

NAME = DiamondTrap

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(CLFLAGS) -o $(NAME)

$(OBJS_DIR) :
	mkdir $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)/$(SRCS_DIR)
	mkdir -p $(OBJS_DIR)/$(CLAPTRAP_DIR)
	mkdir -p $(OBJS_DIR)/$(SCAVTRAP_DIR)
	mkdir -p $(OBJS_DIR)/$(FRAGTRAP_DIR)
	mkdir -p $(OBJS_DIR)/$(DIAMONDTRAP_DIR)

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