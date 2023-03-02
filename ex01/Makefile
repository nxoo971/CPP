 #===============================================================================#
#								SOURCES											  #
 #===============================================================================#

MAIN_DIR		= ./
ACTIONS_DIR		= ./actions/
CLASS_DIR		= ./classes/
PHONEBOOK_DIR	= $(CLASS_DIR)PhoneBook/
CONTACT_DIR		= $(CLASS_DIR)Contact/

SRC_FILES = $(addprefix $(MAIN_DIR), main.cpp) \
			$(addprefix $(ACTIONS_DIR), add.cpp search.cpp print.cpp) \
			$(addprefix $(PHONEBOOK_DIR), PhoneBook.cpp) \
			$(addprefix $(CONTACT_DIR), Contact.cpp)

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

NAME = PhoneBook

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(CLFLAGS) -o $(NAME)

$(OBJS_DIR) :
	mkdir $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)/$(ACTIONS_DIR)
	mkdir -p $(OBJS_DIR)/$(PHONEBOOK_DIR)
	mkdir -p $(OBJS_DIR)/$(CONTACT_DIR)

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