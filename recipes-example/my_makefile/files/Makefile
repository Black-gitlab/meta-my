CFLAGS = -g -Wall -D USE_SYSCALL
CFILES = userprog.c \
		 function.c 
		
HFILES = function.h 

HOBJECTS = userprog.o \
		   function.o

DESTDIR ?= /usr/bin/

default:
	@echo "Opcja wybierana domyslnie...."

all: userprog install

	@echo "Budowa calego projektu"

userprog: $(FILES)

	@echo "Komilacja userprog"
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $@

install: userprog
	@echo "Instalacja systemu"
	install -d  $(DESTDIR)
	install -m 0755 userprog $(DESTDIR)
clean:
	@echo "Usuwanie plikow obiektowych"
	rm -r $(DESTDIR)userprog

.c.o:
	@echo "Jestem w .c.o"
	$(CC) -c $(CFLAGS) $<