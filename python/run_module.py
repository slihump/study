if __name__ == "__main__":
    print("This program is being run by itself.")
    print("In this case, __name__  =", __name__,".")
else:
    print("This program is being imported from another module.")
    print("In this case, __name__ =",__name__,".")