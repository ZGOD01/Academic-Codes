# a) To display word with the longest length
    
sentence = input("Enter string : ")

longest = max(sentence.split(),key = len)

print("Longest word is : ",longest)
print("And its length is : ",len(longest))

# b) To determines the frequency of occurrence of particular character in the string

all_freq = {}

for i in sentence :
    if i in all_freq:
        all_freq[i] += 1 
    else:
        all_freq[i] = 1 
        
print(f"/nCount of all characters in sentence is : " + str(all_freq))


# c) To check whether given string is palindrome or not

text=input("Enter the string which has to check whether its is a palidrome or not :")
print("The Give string is "+text)

rev=reversed(text)

if list(text)==list(rev):
    print("Its is a palindrome !!")
else:
    print("It is nnot an palindrome !!")
    
# d) To display index of first appearance of the substring

sub_str1=input("Enter the word : ")
print("Index of the first apperence of the word "+sub_str1+ " is ")
print(sentence.find(sub_str1))

if(sentence.find(sub_str1==-1)):
    print("Substring not found  ")
else:
    print("Substring Found ")
    
#  e) To count the occurrences of each word in a given string.

print("Following are the count of frequency of each word in the string : ")

def freq(sentence):
    sentence = sentence.split()
    str2=[]
    
    for i in sentence :
        if i not in str2:
            str2.append(i)
            
    for i in range(0, len(str2)):
        print('count frequency', str2[i], 'is :', sentence.count(str2[i]))
        
def main():
    freq(sentence)
    
main()