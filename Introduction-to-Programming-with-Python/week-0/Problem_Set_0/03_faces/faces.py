def main(): 
    frase = input("Digite uma frase: ")
    print(convert(frase))

def convert(face):
    return face.replace(':)','🙂').replace(':(','🙁')

main()