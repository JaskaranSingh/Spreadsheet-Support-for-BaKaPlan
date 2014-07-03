# ====================================================================
# 
#        Filename:  Makefile
# 
#     Description:  Makefile to compile and execute cc/cpp files in
#     				src/ folder.
# 
#         Created:  Saturday 28 February 2013 11:15:42  IST
#        Compiler:  gcc
# 
#          Author:  Mandeep Kaur, meghasimak@gmail.com
#         License:  GNU General Public License
#       Copyright:  Copyright (c) 2013, Great Developers
# 
# ====================================================================

# ====================================================================
# 	Variables
# ====================================================================

CC      =   g++
LMYSQL  =   -L/usr/include/mysql -lmysqlclient -I/usr/include/mysql
LCGICC  =   -lcgicc
CFLAG   =   -c
OFLAG   =   -o

# Header files

H_HEADER    =   header.h
H_DATABASE  =   database-detail.h
H_DB     =   main.h $(H_HEADER) $(DATABASE)

# .CC AND .CPP FILES
CC_DATABASE        =   main.cc
CPP_DATABASE_MAIN  =   parser-main.cpp

# OBJECT FILES
O_DATABASE         =   main.o
O_DATABASE_MAIN    =   parser-main.o

# LINKING
L_DATABASE   =   $(O_DATABASE) $(O_DATABASE_MAIN)

# ====================================================================
#	Main target (1st target)
# ====================================================================

all: mysql-run

# ====================================================================
# 	Targets
# ====================================================================

$(O_DATABASE): $(CC_MYSQL) $(H_DATABASE)
	$(CC) $(CFLAG) $(CC_DATABASE) $(LMYSQL) $(LCGICC)

$(O_DATABASE_MAIN): $(CPP_DATABASE_MAIN) $(H_DATABASE)
	$(CC) $(CFLAG) $(CPP_DATABASE_MAIN) $(LMYSQL) $(LCGICC)

parser: $(L_DATABASE)
	$(CC) $(OFLAG) parser $(L_DATABASE) $(LMYSQL) $(LCGICC)

mysql-run: parser
	

install:
	sudo apt-get install libmysql++
	sudo apt-get install libmysql++-dev

# ====================================================================
# 	Clean .o, .html files
# ====================================================================

clean:
	rm *.o parser
