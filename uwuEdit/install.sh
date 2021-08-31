#!/bin/sh
cp -r ./usr /
cp ./uwuEdit /usr/bin/uwuedit

if [[ -L "/bin" ]]; then
	echo "/bin is a symlink, no need to copy..."
else
	echo "/bin isnt a symlink, symlinking (/bin/uwuEdit -> /usr/bin/uwuEdit)"
	ln -sr /usr/bin/uwuEdit /bin/uwuEdit
fi   
