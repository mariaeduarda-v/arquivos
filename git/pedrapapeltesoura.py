import random #Importe da biblioteca.

def jogo_pedra_papel_tesoura():
    escolhas = ['pedra', 'papel', 'tesoura']

    #Exibe as opções de escolha ao usuário.
    while True:
        print("\nEscolha uma opção:")
        print("1.Pedra")
        print("2.Papel")
        print("3.Tesoura")
        print("4.Sair")
        
        #Solicita a escolha do usuário.
        escolha_usuario = input("Digite o número de sua escolha:")

        
        #Exibe o resultado caso o usuário escolha a quarta opção.
        if escolha_usuario == 4:
            print("Tchau!")
            break

        #Exibe uma mensagem caso o usuário não escolha nenhuma das opções.
        try:
            escolha_usuario = int(escolha_usuario)
            escolha_usuario = escolhas[escolha_usuario - 1]
        except (ValueError, IndexError):
            print("Escolha inválida. Tente novamente.")
            continue
        

        #Utiliza random para a escolha do computador. 
        escolha_computador = random.choice(escolhas)
        
        #Exibe as escolhas.
        print(f"\nVocê escolheu {escolha_usuario}")
        print(f"O computador escolheu {escolha_computador}\n")
        
        #Estrutura de decisão do jogo.
        if escolha_usuario == escolha_computador:
            print("Empate")
        elif (escolha_usuario == 'pedra' and escolha_computador == 'tesoura')or\
             (escolha_usuario == 'papel' and escolha_computador == 'pedra')or\
             (escolha_usuario == 'tesoura' and escolha_computador == 'papel'):
             print("Você ganhou!")#Exibe resultado caso o usuário ganhe.
        else:
            print("Computador ganhou!")#Exibe resultado caso computador ganhe.


#Definindo nome do jogo.
# pylint: disable=undefined-variable
if __name__ == "__main__":
    jogo_pedra_papel_tesoura()




