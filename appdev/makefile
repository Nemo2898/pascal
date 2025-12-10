OBJ = main.o pascal.o screen.o
APPNAME = pascal.run

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ) 

%.o : %.c
	gcc -c -o $@ $<

clean:
	rm $(OBJ) $(APPNAME)
