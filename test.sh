#!/bin/sh
echo 'File Name: $0'
echo 'First parameter : $1'
echo "Second Parameter : $2"
echo "Quoted Values: $@"
echo "Quoted Values: $*"
echo "Total Number of Parameters : $#"
echo "Please, enter some text: "
read var_string
echo "You have entered: $var_string"
