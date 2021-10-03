inp = input("Enter data: ");
data = inp.strip()
data = data.split()
sign = data.pop()

output = []
if len(data)%2==0:
    if sign == '+':
        for i in range(0, len(data), 2):
            output.append(int(data[i])+int(data[i+1]))
    elif sign == '-':
        for i in range(0,2,len(data)):
            output.append(int(data[i])-int(data[i+1]))

    elif sign == '*':
        for i in range(0, len(data), 2):
            output.append(int(data[i])*int(data[i+1]))

    elif sign == '/':
        for i in range(0, len(data), 2):
            output.append(int(data[i])/int(data[i+1]))

    print(output)

else:
    print("Please enter pair number")