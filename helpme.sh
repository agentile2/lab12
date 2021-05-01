#!/bin/bash

echo please type a command 
read C

if  grep -i $C ~/mandatabase.txt 
	then
		grep -i $C ~/mandatabase.txt;
	else
		echo sorry, i cannot help you
fi
