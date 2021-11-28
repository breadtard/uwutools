## Deprecation Notice
### uwuTerm will be rewritten soon. this version will be known as uwuterm1, the new version will be uwuterm2
### uwuTerm1 wont recieve updates, while uwuterm2 will be a *full* rewrite in python.


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

### How do i install it?
On arch: `makepkg -si`

On diffrent distros: put the `uwuTerm` binary into /usr/bin, or see **compiling**

## Compiling

### With Meson
to compile uwuterm with meson, run these commands:
```bash
meson build
cd build
meson compile
```

### Manually
to compile uwuTerm manually, download the source run this command:
`gcc -O2 -Wall $(pkg-config --cflags vte-2.91) main.c -o uwuterm $(pkg-config --libs vte-2.91)` and then put the `uwuterm` binary into /usr/bin, and thats it!

:wq
