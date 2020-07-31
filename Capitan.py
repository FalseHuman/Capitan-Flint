lenght = int(input())

x,y = 0, 0

for i in range(1,lenght+1):

   str = input()

   number = int(str[-1])

   if str[0] == 'N':

       y += number

   if str[0] == 'S':

       y -= number

   if str[0] == 'E':

       x += number

   if str[0] == 'W':

       x -= number

print(x,y)