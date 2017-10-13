#!/usr/bin/env python3
import pprint
import random
img = """        
  1  1  
  1  1  
  1  1  
        
 1    1 
  1111  
        """

new_img = [list(line) for line in img.split('\n')]
mysum = 0
for row in new_img:
    for col, i in enumerate(row):
        if i == ' ':
            v = random.randint(0, 10) / 10
            mysum += v
            row[col] = v
        elif i == '1':
            row[col] = 1.0
            mysum += 1.0
s = "double image[8][8] = " + \
    pprint.pformat(new_img).replace('[', '{').replace(']', '}') + ';'
print(s)
print(mysum / (8 * 8))
