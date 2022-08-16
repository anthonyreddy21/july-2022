
d = {1: "Anthony",2: "Thunder Soft",3: 2022}
y={"a":"1","b":"2"}
a=10
def dict_methods(d):
    
    print("copy",d.copy())
    
    print("get",d.get(2))
    
    print("items",d.items())
    
    print("keys",d.keys())
    
    print("pop",d.pop(2))
    print("after pop ",d)
    
    print("popitem",d.popitem())
    print("after popitem ",d)
          
    print("setdefault",d.setdefault("b","thundersoft"))
    
    print("update",d.update({2: "RED"}))
    print("after update ",d)
    
    print("values",d.values())

    print("fromkeys",dict.fromkeys(d, a))

    print("clear",d.clear())
    
dict_methods(d)
