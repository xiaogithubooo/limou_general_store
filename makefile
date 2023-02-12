procbar:ProcBar.c main.c
	gcc ProcBar.c main.c -o procbar 

.PHONY:clean
clean:
	rm -f procbar
