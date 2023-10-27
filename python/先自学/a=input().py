def input_string():
    a = input()
    return a
def output_tuple(a):
    words = a.split()
    return tuple(words)
a = input_string()
output = output_tuple(a)
print(output)