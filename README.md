This is a simple collection of demos of the Java Native Interface (JNI)

Dr Gary Allen, The University of Huddersfield


This demo is based upon several different ones found online, including:
https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html


The following instructions assume a linux platform.  If running it on windows or Mac the instructions will be different for compiling the C code.  I can't help with that.

The instructions also assume the "JAVA_HOME" environment variable is set.  If not, set it with:

    export JAVA_HOME=/your/java/installed/dir

Obviously, replace "/your/java/installed/dir" with the full path to your installed SDK.

1.  A simple Hello World demo.

To run the HelloWorldJNI demo I suggest importing it into IntelliJ then opening a terminal (inside intellij) and typing the following:

    cd src
    javac -h . HelloWorldJNI.java
    gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhello.so HelloWorldJNI.c
    java -Djava.library.path=. HelloWorldJNI

The above commands:

    change to the src folder (where all the files are)
    compile the java code and generate a C header file, "HelloWorldJNI.h"
    compile the C code
    run the java program, which in turn loads and runs the C code.

If all goes well the output "Hello World from some C code!" will be printed to the screen.

A variation of the above uses C++ to implement the "sayHello" method (instead of C).  Rebuild the shared library from C++ and rerun the Java program with the following commands:

    g++ -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhello.so HelloWorldJNI.cpp
    java -Djava.library.path=. HelloWorldJNI



2.  A simple calculator example

The above example has no parameter passing and no value returned from the called C (or C++) function.  The following example includes both of these.

Again, import the code into IntelliJ and open the embedded terminal.  If not already in the src folder then cd to it (as above), then type:

    javac -h . CalculatorJNI.java
    gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libcalculator.so Calculator.c
    java -Djava.library.path=. CalculatorJNI

Check that the output makes sense, and look at the code to see what it is doing.

Why not try implementing a C++ version of the Calculator.c program, as with the HelloWorld program above?


Note that the "javac", "gcc", and "g++" commands will have to be run through the terminal, but the java code can be run direct from the IDE in the usual way as long as the following is added to the VM arguments of the Run Configuration:

    -Djava.library.path=src


