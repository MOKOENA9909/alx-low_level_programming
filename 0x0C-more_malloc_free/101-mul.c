import sys

def multiply(num1, num2):
    return num1 * num2

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Error")
        sys.exit(98)
    try:
        num1 = int(sys.argv[1])
        num2 = int(sys.argv[2])
    except ValueError:
        print("Error")
        sys.exit(98)
    if num1 < 0 or num2 < 0:
        print("Error")
        sys.exit(98)
    result = multiply(num1, num2)
    print(result)
