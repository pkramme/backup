all:
	gcc -Wall -ansi -Wpedantic src/configfile.c src/getch/getch.c src/db.c src/main.c -o build/btsoot
alternative:
	gcc -Wall -ansi -Wpedantic -D ALTERNATIVE src/configfile.c src/getch/getch.c src/db.c src/main.c -o build/btsoot-alt
clean:
	rm build/btsoot
