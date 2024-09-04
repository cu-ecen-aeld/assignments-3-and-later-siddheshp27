#!/bin/sh

if [ $# -ne 2 ]; then
	echo "Incorrect no of parameters"
	exit 1
fi

if [ ! -d $1 ]; then
	echo "failed to find the dir : $1"
	exit 1
fi


FILES=$(find $1 -type f  | wc -l)

OCC=$(grep -ro $2 $1 | wc -l)
echo The number of files are $FILES and the number of matching lines are $OCC
