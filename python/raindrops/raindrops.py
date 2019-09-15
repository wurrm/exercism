def convert(number: int) -> str:
    number -= 1
    return ('Pling' * (number % 3 // 2) +
            'Plang' * (number % 5 // 4) +
            'Plong' * (number % 7 // 6)
            or str(number + 1))

