#!/bin/bash

echo this shell script will find files in your home directory that have not been accessed in a number of days and compress these files. Type in a number:


read N


find ~/ -atime $N | zip -c compress -@
