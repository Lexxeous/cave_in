# set default varibles
var?=10001

run: # compile and run
	@echo "Compiling..."||:
	@g++ -c lexx.cpp ||:
	g++ -c command.cpp
	g++ -c cave_in.cpp
	g++ -o cave_in.sh cave_in.o command.o lexx.o
	./cave_in.sh

comp: # compile

exec: # execute

clean: # delete compiled file(s) and executable(s)
	# if [ -a lexx.o ] ; \
	# then \
	#      rm lexx.o ; \
	# fi;
	@rm  cave_in.o command.o lexx.o cave_in.sh ||:
