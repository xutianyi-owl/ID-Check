CXX=clang++
Objects= IDcheck.o check.o inform.o
IDcheck:$(Objects)
	$(CXX) -o IDcheck $(Objects)
check.o:check.cpp check.h
	$(CXX) -c check.cpp
inform.o:inform.cpp inform.h
	$(CXX) -c inform.cpp
IDcheck.o:IDcheck.cpp check.h inform.h
	$(CXX) -c IDcheck.cpp
