trlen.c:7:5: error: conflicting types for ‘_strlen’
    7 | int _strlen(char *s)
	      |     ^~~~~~~
	      In file included from 2-strlen.c:1:
	      main.h:10:6: note: previous declaration of ‘_strlen’ was here
	         10 | void _strlen(char *s);
		       |      ^~~~~~~
		       2-strlen.c: In function ‘_strlen’:
		       2-strlen.c:14:6: error: expected ‘;’ before ‘}’ token
		          14 |   s++
			        |      ^
				      |      ;
				         15 |  }
					       |  
