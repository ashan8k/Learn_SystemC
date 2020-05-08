# Run command

```shell
g++ -I. -I /usr/local/systemc-2.3.3/include -L. -L/usr/local/systemc-2.3.3/lib-linux64 -Wl,-rpath=/usr/local/systemc-2.3.3/lib-linux64 -lsystemc -lm -o exor2gate main.cpp
```

Compile and get the executable file ```exor2gate```.
Then run it on the terminal as bellow.
```
$ ./exor2gate
```
then the console output will display as below.

```dotnetcli
        SystemC 2.3.3-Accellera --- Apr 22 2020 15:49:44
        Copyright (c) 1996-2018 by all Contributors,
        ALL RIGHTS RESERVED
      Time A B F
       0 s 0 0 0
      1 ns 0 0 0
     11 ns 0 1 1
     21 ns 1 0 1
     31 ns 1 1 0

Info: /OSCI/SystemC: Simulation stopped by user.
```