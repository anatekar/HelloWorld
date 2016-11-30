'''
	Hello World program in python
'''
import sys
if len(sys.argv) == 1:
    print("Hello World")
else:
    for i in range(1, len(sys.argv)):
        print(sys.argv[i],end=' ')
    print('')
