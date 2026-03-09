while True:
    a = int(input())
    if a == 0:
        break
    else:
        if a % 42 == 0:
            print("PREMIADO")
        else:
            print("TENTE NOVAMENTE")