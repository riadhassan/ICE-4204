f = open("inp.txt", "r")
file_read = f.readline()
f.close()
print(file_read)
inp = str(file_read)
print(inp)
data = inp.strip()
data = data.split()
f = open("output.txt", "w")


if len(data)%2==0:
    l = 0
    for i in range(0, len(data), 2):
        l = l+1
        output = []
        output.append(str(int(data[i])+int(data[i+1])))
        output.append(str(int(data[i])-int(data[i+1])))
        output.append(str(int(data[i])*int(data[i+1])))
        output.append(str(int(data[i])/int(data[i+1])))
        ans = ' '.join(output)
        line = "case " + str(l) + ': ' + ans + '\n'
        f.write(line)
        print(output)

    f.close()
else:
    print("Please enter pair number")
