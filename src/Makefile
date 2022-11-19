CC = gcc
CFLAGS = -c -std=c11 -I .
TST_LIBS = -lm $(shell pkg-config --cflags --libs check)
COV_LIBS = -coverage
SRC_DIR = src
TST_FILES = tests/test.c
UNAME_S := $(shell uname -s)
ifneq ($(UNAME_S),Darwin)
	LEAKS_RUNNER := CK_FORK=no valgrind --leak-check=full --error-exitcode=1 ./exe_tests
else
	LEAKS_RUNNER := CK_FORK=no leaks --atExit -- ./exe_tests
	DFLAGS += -DMACOSX
endif

H_FILES = s21_math.h
SRC_C = s21_abs.c s21_acos.c s21_asin.c s21_atan.c s21_ceil.c s21_cos.c s21_exp.c s21_fabs.c s21_floor.c s21_fmod.c s21_log.c s21_pow.c s21_sin.c s21_sqrt.c s21_tan.c
TST_C = test.c

SRC_OBJS=$(SRC_C:.c=.o)
TST_OBJS=$(TST_C:.c=.o)

all: s21_math.a

$(SRC_OBJS): $(SRC_C) $(H_FILES)
	$(CC) $(DFLAGS) $(CFLAGS) $(SRC_C)

$(TST_OBJS): $(TST_FILES)
	$(CC) $(DFLAGS) $(CFLAGS) $(TST_FILES)

s21_math.a: $(SRC_OBJS)
	ar rcs s21_math.a $(SRC_OBJS)

exe_tests: $(SRC_OBJS) $(TST_OBJS)
	$(CC) $(SRC_OBJS) $(TST_OBJS) $(TST_LIBS) $(COV_LIBS) -o exe_tests

run_exe_tests: exe_tests
	./exe_tests

check_leaks: exe_tests
	$(LEAKS_RUNNER)

test: run_exe_tests

check: lint cppcheck run_exe_tests check_leaks gcov_report

rebuild: clean all

gcov_report:
	$(CC) $(DFLAGS) --coverage $(SRC_C) $(TST_FILES) -o exe_tests $(TST_LIBS)
	./exe_tests
	lcov -t "exe_tests" -o exe_tests.info -c -d ./
	genhtml -o codecov exe_tests.info

lint:
	@cp ../materials/linters/CPPLINT.cfg ../CPPLINT.cfg > /dev/null 2>&1
	find . -name '*.[ch]' | xargs python3 ../materials/linters/cpplint.py
	@rm -rf ../CPPLINT.cfg > /dev/null 2>&1

cppcheck:
	cppcheck . --enable=all -I . --suppress=missingIncludeSystem

.PHONY: clean all lint test run_exe_tests check_leaks gcov_report check tests

clean:
	-rm -rf *.o *.gcda *.gcno exe_tests *.a codecov exe_tests*
