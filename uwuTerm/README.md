# uwuTerm
## an awful terminal emulator, made in C

### What is uwuTerm?
uwuTerm is an awful terminal emulator that i wrote because i was bored on online lessons. It has no config file. Its basically a TTY in a box, but it can scroll and it has a diffrent font. You shouldnt use it ever.

### Can i atleast change the colors?
Yes, use .xresources file. 

> how do i use .xresources file

no idea

### Why are you putting it on github then?
because some guy in a discord server asked me lol

## Compiling

### With MkAll
to compile uwuTerm using MkAll, cd up one dir and run `bash mkall.sh`.
```bash
$ cd ..
$ bash mkall.sh
MkAll: Cleaning uwuCalc
MkAll: uwuCalc isn't C, skipping
MkAll: Cleaning uwuEdit
MkAll: uwuEdit isn't C, skipping
MkAll: Cleaning uwuLuks
MkAll: uwuLuks isn't C, skipping
MkAll: Cleaning uwuPlay
MkAll: uwuPlay isn't C, skipping
MkAll: Cleaning uwuTerm
  CC	main.c
MkAll: uwuTerm done
```
and bam now uwuterm is compiled, right here in this dir

### Manually
you know how this works probably
`gcc -O2 -Wall $(pkg-config --cflags vte-2.91) main.c -o uwuterm $(pkg-config --libs vte-2.91)`



:wq
