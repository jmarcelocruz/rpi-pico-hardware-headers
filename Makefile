CFLAGS = -Wall -Wextra -g -I$(includedir) $(EXTRA_CFLAGS)
LDFLAGS = $(EXTRA_LDFLAGS)

includedir := include/
sourcedir := src/

binaries :=
sources :=
objects := $(patsubst %.c,%.o,$(sources))
depends := $(patsubst %.c,%.d,$(sources))

.PHONY: all clean

all:

clean:
	$(RM) $(binaries) $(objects) $(depends)

$(objects): %.o: %.c
	$(CC) -c $< $(CFLAGS) -o $@

$(depends): %.d: %.c
	$(CC) $^ $(CFLAGS) -MT $(patsubst %.c,%.o,$<) -MM -o $@

-include $(depends)
