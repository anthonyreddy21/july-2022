

set1 = {1,2,3,4,5,6,7,8}

def fun1(s1):

    print(s1.add(3))            # adding the elements in set using add function
    print(s1.clear())           # clear function in Set

    s2 = {}
    print(s2.copy)              #copy data one element to other element

    set2={1,2,4,9,10,11}          
    print(s1.difference(s2))    #printing the different elements

    set2={1,2,4,9,10,11}     
    print(s1.difference_update(s2)) #printing different element but updated s1

               
    print(s1.discard(7))        #removing the element

    set2={1,2,4,9,10,11}               
    print(s1.intersection(set2))  #common element will print

    s2={5,4,9,10}
    s1.intersection_update(set2)
    print(s1)
fun1(set1)
