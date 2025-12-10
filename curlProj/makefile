OBJ = main.o sendData.o
APPNAME = curlProj.run

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ) -lcurl

%.o : %.c
	gcc -c -o $@ $<

clean:
	rm $(OBJ) $(APPNAME)
