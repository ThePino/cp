def main():
    n: int = int(input().strip())
    a: list[int] = list(map(lambda x: int(x.strip()), input().split(" ")))
    print(n)
    for i in a:
        print(i, end=" ")
    return


if __name__ == "__main__":
    main()
