ssl: lex.yy.c y.tab.c
	cc lex.yy.c y.tab.c -o ssl.out -lm

lex.yy.c: y.tab.c ssl.l
	lex ssl.l

y.tab.c: ssl.y
	yacc -d ssl.y

clean: 
	rm -f lex.yy.c y.tab.c y.tab.h ssl

