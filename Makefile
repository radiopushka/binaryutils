all:
	gcc ./tobin.c -o tobin
	gcc ./tohex.c -o tohex
	gcc ./bintodec.c -o bintodec
	gcc ./hextodec.c -o hextodec
install:
	cp ./tobin /usr/local/bin
	cp ./tohex /usr/local/bin 
	cp ./bintodec /usr/local/bin 
	cp ./hextodec /usr/local/bin 
