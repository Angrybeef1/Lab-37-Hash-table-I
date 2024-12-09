# Lab-37-Hash-table-IPart One

Write a function sum_ascii() that receives a single string and returns the sum of that string's character's ASCII values. 

You can cast from a character to an integer easily. Look at the demo code in the starter repl. You cast a character-to-an-int and an int-to-a-character by prefacing the variable with (int) or (char) accordingly:

    char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;   << prints the ASCII value of 'A'
    int b = 66;
    cout << b << endl;
    cout << (char) b << endl;  << prints the char equivalent of 66

Test your function by providing it with any string, double-checking the ASCII values by hand to validate your code's calculations.

Commit/push your code one additional time at the end of Part One.

 

Part Two
Your code contains a large dataset: over 100,000 12-character strings of hexadecimal characters. These might represent serial numbers, part numbers, etc.

Read the file. Send each string to the function, receiving that string's ASCII sum, and totaling the return value into a grand total.

Output the grand total (the sum of all ASCII values in the entire file); it should be 69893419. 

Commit/push your code one additional time after Part Two.

 

Part Three
Change the function sum_ascii() to gen_hash_index(). Adapt the code appropriately.

We'll now create the hash table data structure. It'll be a map comprised of an int and a list as key-value pairs:

keys that are integers
values that are std::lists

Create the std::map named hash_table. The key in the map is an int, the hash index. The value in a map is a std::list, which will contain the 12-character codes from the file that all map to that hash index.

When codes are read from the file, send the code to your function. Receive its hash index that's returned from the function. Input that pair into the map (the hash index and the code string). Remember that the code string is going into a std::list, so use the appropriate method to manipulate that std::list.

Display just the first 100 map entries to the console to test your data structure. Remember how to access map elements with .first and .second as necessary.
