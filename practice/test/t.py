import timeit

class Debug:
    def mainProgram(self):
        result = timeit.timeit(stmt="for i in range(100): print(i)", number=10)
        print(result)

main = Debug()
main.mainProgram()