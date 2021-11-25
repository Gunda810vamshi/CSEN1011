# WAP demonstrate dictionary operations [len, concatenation, appending, deleting, updating, keys, items] 
dict1={'Name':'Sathvika','Surname':'Kuruvella','Department':'biotechnology','Sem':3} 
dict2={'Section':'K','Year':1} 
dict3={'Sem':3,'Year':2} 
print("The elements in dictionary 1 are: ",dict1) 
print("The elements in dictionary 2 are: ",dict2) 
print("The elements in dictionary 3 are: ",dict3) 
c=len(dict1) 
print("The length of dictionary 1 is : ",c) 
d={*dict1,*dict2} 
print("The concatenation of two dictionaries is: ",d) 
dict1['College']='CBIT' 
dict1['Class no']=204 
print("The new elements of dictionary 1 are: ",dict1) 
dict1.pop('Class no') 
print("The elements in dictionary 1 after deleting paticular element are: ",dict1) 
dict1.update([dict3]) 
print("The updated dictionary 1 is:",dict1) 
a=dict1.keys() 
print("The keys in dictionary 1 are:",a) 
b=dict1.items() 
print("The items in the dictionary 1 are: ",b)