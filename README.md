# MNXB11-project-template

Question Homework2

1.They can distinguish by the header and the library files.The static library is the linker copies the code directly from library to the executable. In dynamic library, the loader process locates and loads the shared library into memory.

2.-L, this tells the compiler in what directories to look for library files when linking (note that this is different from telling the loader where to find files)    -l, this tells the compiler that you want to link to a particular library.  

3.the name, the parameter, the return value and the function body of function are the four definitions.

4. use '&' functions to ge the address. The type is integer, shows in 'int'.

5.class Point2D {
public:
    double x;
    double y;

    Point2D();

    Point2D(double xCoord, double yCoord);

    ~Point2D();
};


Question Homework1
1. Preprocessing: the first stage of process, start with ‘#’. ‘#include’ is the most important statement.    Compiling: check if the code corrects or not and change to an object file. Make sure the code is optimizing.     Linking: the last process, glues together the file had compiled with any libraries used into an executable.

2. The ‘leaking_string’ is not destroyed and program will not delete it.

3.1. g++ -Wall -Wextra -Werror homework.cxx -o homework.o     
3.2. g++ -Wall -Wextra -Werror homework.cxx -o homework

4. The function includes a constant, which will not change in the program. The function is use for copy.

5. RAII (Resource Acquisition Is Initialization) is a C++ programming idiom which focused on managing resources by tying their acquisition and release to object lifetime.

