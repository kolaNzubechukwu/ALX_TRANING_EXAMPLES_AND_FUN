#!/bin/bash
echo "first try for current pid "
./mypid
echo "second try current pid "
./mypid
echo ":first try parent pid"
./pmyppid
echo "echo \$$"
echo $$

