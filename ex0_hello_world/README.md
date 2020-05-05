## The command to compile SystemC hello_world.cpp into executable called hello_world

```shell
g++ -I. -I /usr/local/systemc-2.3.3/include -L. -L/usr/local/systemc-2.3.3/lib-linux64 -Wl,-rpath=/usr/local/systemc-2.3.3/lib-linux64 -lsystemc -lm -o hello_world hello_world.cpp
```

Now, type `./hello_world` to run the exectutable and you should get this:

```

        SystemC 2.3.3-Accellera --- Nov 15 2018 12:20:10
        Copyright (c) 1996-2018 by all Contributors,
        ALL RIGHTS RESERVED
Hello World!

```