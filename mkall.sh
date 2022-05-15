#!/bin/bash

usage() {
	echo 'MkAll.sh - a shitty shellscript to compile shitty code'
	echo "Usage: $0 [-c] [-h]"
	echo "  -c - clean binaries"
	echo "  deletes all binary files"
	echo "  basically a 'make clean'"
	echo ''
	echo "  -h - show help"
	echo "  shows this message"
	return 0
}

if [ "$1" == "-c" ]; then
	CLEAN=1
elif [ "$1" == "-h" ]; then
	usage
	exit
fi

if [ -z $CFLAGS ]; then
	CFLAGS="-O3 -Ofast -march=native"
fi

for i in $(find * -type d -not -path "*/\.*"); do
	if [ ! -z $CLEAN ]; then
		echo "MkAll: Making $i"
	else
		echo "MkAll: Cleaning $i"
	fi
	cd $i
	if [ -f .nocc ]; then
		echo "MkAll: $i isn't C, skipping"
		cd ..
		continue
	fi
	OUTNAME="$(echo *.c | sed -e "s/ /\n/g" | cut -d'.' -f1)"
	if [ -f .cclf ]; then
		LFLAGS="$(cat .cclf)"
	else
		LFLAGS=""
	fi
	for j in $OUTNAME; do
		if [ ! -z $CLEAN ]; then
			echo "  RM	$j"
			rm $j
		else
			echo "  CC	$j.c"
			cc $j.c $CFLAGS -o $j $LFLAGS
		fi
	done
	echo "MkAll: $i done"
	cd ..
done
