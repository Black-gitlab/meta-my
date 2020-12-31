CFLAGS = -g -Wall -D USE_SYSCALL
TARGET = userprog
FILES = userprog.c \
		function.c \
		function.h 



default:
	@echo "Opcja wybierana domyslnie...."

all: userprog install

	@echo "Budowa calego projektu"

userprog: $(FILES)

	@echo "Komilacja userprog"
	$(CC) $^ -o $@

install:
	@echo "Instalacja systemu"

clean:
	@echo "Usuwanie plikow obiektowych"

