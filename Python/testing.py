def decode_cryptex(N, U, S, rings):
    unlock_word = U
    secret_word = S

    # Percorre cada anel do cryptex
    for ring in rings:
        # Encontra a posição da palavra de desbloqueio no anel
        pos = ring.find(unlock_word)

        # Se a posição for encontrada, substitui a palavra de desbloqueio pela palavra secreta
        if pos != -1:
            unlock_word = secret_word
            break

    return unlock_word + " " + secret_word


def main():
    D = int(input())

    # Lê os casos de teste
    for _ in range(D):
        # Lê o número de anéis, a palavra de desbloqueio e a palavra secreta
        N, U, S = input().split()

        rings = []
        for _ in range(int(N)):
            ring = input()
            rings.append(ring)

        # Chama a função para decodificar o cryptex
        result = decode_cryptex(N, U, S, rings)

        # Imprime o resultado
        print(result)


if __name__ == "__main__":
    main()
