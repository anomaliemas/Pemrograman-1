def main():
    bilangan = int(input())
    nilai = list(map(int, input().split()))
    maks = max(nilai)
    minim = min(nilai)
    print(maks,minim)

if __name__ == "__main__":
    main()