#!/usr/bin/python3
import os
import sys
import socket
import shutil

print("CLIENT BACKUP SOFTWARE")
src = sys.argv[1]
ip = sys.argv[2]
dest = sys.argv[3]
shutil.copytree(src, dest, symlinks = False, ignore = None)
