CC=gcc
CFLAGS=-Wall

BUILD_DIR=../bin

SLIST_DEMONSTRATION=slist-demonstration
SLIST_DEMONSTRATION_OBJ=slist.o slist-demonstration.o

# $@ -> name of the rule
# $^ -> all dependencies
$(SLIST_DEMONSTRATION): $(SLIST_DEMONSTRATION_OBJ)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $^

# $< -> first dependency name
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(BUILD_DIR)/* *.o
