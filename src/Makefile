CC=gcc
CFLAGS=-Wall

BUILD_DIR=../bin
OBJ_DIR=obj

SLIST_DEMONSTRATION=slist-demonstration
SLIST_DEMONSTRATION_OBJ=slist.o slist-demonstration.o

# $@ -> name of the rule
# $^ -> all dependencies
$(SLIST_DEMONSTRATION): $(SLIST_DEMONSTRATION_OBJ)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(addprefix $(OBJ_DIR)/, $^)

# $< -> first dependency name
%.o: %.c
	$(CC) $(CFLAGS) -o $(OBJ_DIR)/$@ -c $<

clean:
	rm -rf $(BUILD_DIR)/* $(OBJ_DIR)/*.o
