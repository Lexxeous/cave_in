g++ -c Alex.cpp
g++ -c command.cpp
g++ -c caveIn.cpp
g++ -o caveIn.sh caveIn.o command.o Alex.o
./caveIn.sh