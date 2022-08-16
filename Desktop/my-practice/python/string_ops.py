
str = "anthony ashok"
tup = ("anthony","ashok","Reddy")

def fun(s):
    print("capitalize ",s.capitalize())       # to capitalize the 1st character
    print("casefold ",s.casefold())         # to make all charcters lower case
    print("center",s.center(20,"*"))     # to center the string with some other character
    print("count ",s.count("a"))         # number of times a specified value occurs in a string
    print("encode ",s.encode())           # to encode a version of the string
    print("endswith ",s.endswith("k"))      # Returns true if the string ends with the specified value
    print("expandtabs ",s.expandtabs(10))     # Sets the tab size of the string
    print("find ",s.find("o"))          # Searches the string for a specified value and returns the position of where it was found
    print("my name is {} and my company is {}".format(s,"TS"))
    print("index ",s.index("ash"))
    print("isalnum",s.isalnum())
    print("isalpha ",s.isalpha())
    print("isascii ",s.isascii())
    print("isdecimal ",s.isdecimal())
    print("isdigit ",s.isdigit())
    print("isidentifier ",s.isidentifier())
    print("islower ",s.islower())
    print("isnumeric ",s.isnumeric())
    print("isprintable ",s.isprintable())
    print("isspace ",s.isspace())
    print("istitle ",s.istitle())
    print("isupper ",s.isupper())
    print("join using tuple "," ".join(tup))
    print("ljust ",s.ljust(14),"Reddy is my full name")
    print("lower ",s.lower())
    print("lstrip ",s.lstrip())
    

    
    
fun(str)
