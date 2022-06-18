CC	=	gcc
FLAGS	=	-Wall	-Werror	-Wextra	-std=c11	-pedantic	-fanalyzer	#-g	-fsanitize=address
LFLAGS	=	-lcheck	-lm	-lpthread
RFLAGS	=	-fprofile-arcs	-ftest-coverage
TDIR	=	tests
EXEDIR	=	testrun/

all:	s21_math.a	test

all_peer:	s21_math.a_peer	test_peer	gcov_report

clean:
	rm	-rf	*.o	*.out	*.gcno	*.gcna *.html *.gcda *.css
	rm -rf testrun/testrun
	rm	-rf	*.a

test:
	$(CC)	$(FLAGS)	-c	$(TDIR)/*.c
	$(CC)	*.o	s21_math.a	$(LFLAGS)	-o	$(EXEDIR)testrun
	$(EXEDIR)testrun
	rm	-rf	*.o

test_peer:
	$(CC)	$(FLAGS)	-c	$(TDIR)/*.c
	$(CC)	$(RFLAGS)	*.o	s21_math.a	$(LFLAGS)	-o	$(EXEDIR)testrun
	$(EXEDIR)testrun
	rm	-rf	*.o

s21_math.a:
	$(CC)	$(FLAGS)	-c	*.c
	ar	rcs	s21_math.a	*.o
	ranlib	s21_math.a
	rm	*.o

s21_math.a_peer:
	$(CC)	$(FLAGS)	-c	$(RFLAGS)	*.c
	ar	rcs	s21_math.a	*.o
	ranlib	s21_math.a
	rm	*.o	

gcov_report:
	gcovr -r . --html --html-details -o coverage_report.html

run:	s21_math.a
	$(CC)	$(FLAGS)	main.c	s21_string.a
	rm	-rf	*.o	*.a
	./a.out
