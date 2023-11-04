i = 0
while(i < 3): 
    angka1, angka2 = input().split()
    if(angka1 < angka2):
        print(angka1, angka2)
    else:
        print(angka2, angka1)
    i = i + 1