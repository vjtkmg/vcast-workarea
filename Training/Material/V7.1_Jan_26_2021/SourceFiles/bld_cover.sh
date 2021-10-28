#!/bin/bash

# This shell script builds the Manager POS system.

gcc -g -c manager_driver.c manager.c database.c
gcc -o diner *.o