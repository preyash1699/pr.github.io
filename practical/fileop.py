# f = open("test.txt","w")

# print(f.write(""))
# f.close()

fl = open("test.txt","r")
for line in fl:
    if line == "end game":
        fl.seek(8)
    print(line)
fl.close