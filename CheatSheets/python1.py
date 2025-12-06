import math
import collections
import heapq # Useful for "Top K elements" problems

def syntax_refresher():
    print("--- 1. BASIC MATH & NUMBERS ---")
    # Exponentiation (Power)
    print(f"2 to the power of 3 (2**3): {2 ** 3}")       # Syntax: **
    print(f"Power using math lib: {math.pow(2, 3)}")
    
    # Square Root
    print(f"Square root of 25: {math.sqrt(25)}")
    
    # Division
    print(f"Normal Division (5 / 2): {5 / 2}")           # Returns float (2.5)
    print(f"Floor/Integer Division (5 // 2): {5 // 2}")  # Returns int (2) - VERY IMPORTANT
    print(f"Modulus (Remainder) (5 % 2): {5 % 2}")       # Returns remainder (1)
    
    # Absolute value, Ceil, Floor
    print(f"Absolute value abs(-10): {abs(-10)}")
    print(f"Ceiling (round up) 4.2: {math.ceil(4.2)}")
    print(f"Floor (round down) 4.8: {math.floor(4.8)}")


    print("\n--- 2. STRING MANIPULATION ---")
    text = "  Hello World  "
    
    # Stripping whitespace
    clean_text = text.strip() 
    print(f"Strip: '{clean_text}'")
    
    # Splitting and Joining (CRITICAL FOR INTERVIEWS)
    sentence = "Python is great"
    words = sentence.split(" ")         # Turns string into list: ['Python', 'is', 'great']
    print(f"Split: {words}")
    
    joined = "-".join(words)            # Turns list into string: "Python-is-great"
    print(f"Join: {joined}")
    
    # Slicing Strings [start:end:step]
    s = "abcdefg"
    print(f"Reverse string (s[::-1]): {s[::-1]}")
    print(f"First 3 chars (s[:3]): {s[:3]}")
    
    # ASCII conversion
    print(f"Ord of 'A': {ord('A')}")    # Character to Integer
    print(f"Chr of 65: {chr(65)}")      # Integer to Character


    print("\n--- 3. LISTS (ARRAYS) ---")
    nums = [3, 1, 4, 1, 5]
    
    # Basic Operations
    nums.append(9)          # Add to end
    nums.pop()              # Remove from end
    nums.insert(0, 100)     # Insert at index 0 (Expensive operation!)
    
    # Sorting
    # 1. nums.sort() modifies the list in-place (returns None)
    # 2. sorted(nums) returns a NEW list
    sorted_nums = sorted(nums) 
    print(f"Original: {nums}")
    print(f"Sorted Copy: {sorted_nums}")
    
    # List Comprehension (One-liner loops - IMPRESSIVE IN INTERVIEWS)
    squares = [x**2 for x in nums] 
    print(f"Squares: {squares}")
    
    # Filtering with list comprehension
    evens = [x for x in nums if x % 2 == 0]
    print(f"Evens only: {evens}")
    
    # 2D List (Matrix) initialization
    rows, cols = 3, 3
    matrix = [[0] * cols for _ in range(rows)] 
    print(f"3x3 Matrix: {matrix}")


    print("\n--- 4. DICTIONARIES (HASH MAPS) ---")
    # Syntax: {key: value}
    my_dict = {"name": "Alice", "age": 25, "city": "NY"}
    
    # Accessing (Use .get() to avoid errors if key is missing)
    print(f"Get Name: {my_dict.get('name')}")
    print(f"Get Score (Missing): {my_dict.get('score', 0)}") # Returns 0 if missing
    
    # Looping through dicts
    print("Looping dict:")
    for key, value in my_dict.items():
        print(f"  {key}: {value}")
        
    # Counting Frequency (Interview Cheat Code)
    letters = "banana"
    counts = collections.Counter(letters) # Returns {'a': 3, 'n': 2, 'b': 1}
    print(f"Frequency Count: {counts}")


    print("\n--- 5. SETS (UNIQUE ELEMENTS) ---")
    # Great for "contains duplicate" problems or finding unique items
    my_set = {1, 2, 3, 3, 3} # Duplicates are automatically removed
    print(f"Set (Unique): {my_set}")
    
    my_set.add(4)
    if 4 in my_set: # Lookup is O(1) - Very fast
        print("4 is in the set")


    print("\n--- 6. CONTROL FLOW (LOOPS & LOGIC) ---")
    
    # If / Elif / Else
    score = 85
    if score > 90:
        print("Grade: A")
    elif score > 80:
        print("Grade: B")
    else:
        print("Grade: C")
        
    # Loops
    print("Range Loop:")
    for i in range(0, 10, 2): # start, stop(exclusive), step
        print(i, end=" ")
    print()
        
    # Enumerate (Access index AND value - USE THIS INSTEAD OF range(len(x)))
    animals = ["cat", "dog", "fish"]
    print("Enumerate Loop:")
    for index, value in enumerate(animals):
        print(f"  Index {index} is {value}")
        
    # While Loop
    count = 3
    while count > 0:
        print(f"  Count: {count}")
        count -= 1


    print("\n--- 7. USEFUL FUNCTIONS & HEAPS ---")
    
    data = [10, 20, 5, 100]
    print(f"Max: {max(data)}")
    print(f"Min: {min(data)}")