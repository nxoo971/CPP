 #===============================================================================#
#								SOURCES											  #
 #===============================================================================#

MAIN_DIR		= ./
SRCS_DIR		= $(MAIN_DIR)/srcs/
CLASS_DIR		= ./classes/
WEAPON_DIR		= $(CLASS_DIR)Weapon/
HUMAN_A_DIR		= $(CLASS_DIR)HumanA/
HUMAN_B_DIR		= $(CLASS_DIR)HumanB/

SRC_FILES = $(addprefix $(MAIN_DIR), main.cpp) \
			$(addprefix $(WEAPON_DIR), Weapon.cpp) \
			$(addprefix $(HUMAN_A_DIR), HumanA.cpp) \
			$(addprefix $(HUMAN_B_DIR), HumanB.cpp) \

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

NAME = Weapon

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(CLFLAGS) -o $(NAME)

$(OBJS_DIR) :
	mkdir $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)/$(SRCS_DIR)
	mkdir -p $(OBJS_DIR)/$(WEAPON_DIR)
	mkdir -p $(OBJS_DIR)/$(HUMAN_A_DIR)
	mkdir -p $(OBJS_DIR)/$(HUMAN_B_DIR)

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