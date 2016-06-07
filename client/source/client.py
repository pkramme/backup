#!/usr/bin/python3
import os
import sys

print("THIS IS THE CLIENT SERVER!")
if sys.argc == 1:
    print("YOU DIDN'T GIVE ANY ARGS")
elif sys.argc == 2:
    print(sys.argv[1])
elif sys.argc == 3:
    print(sys.argv[1], sys.argv[2])
