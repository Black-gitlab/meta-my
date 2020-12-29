CFLAGS = -g -Wall -D USE_SYSCALL
TARGET = userprog
FILE = function

all: $(TARGET)

$(TARGET): $(TARGET).c 

	${CC} $(CFLAGS) $(LDFLAGS) $(TARGET).c $(FILE).c -o $(TARGET)

clean:

	rm -f $(TARGET)

install: 

	install -d $(DESTDIR)
	install -m 