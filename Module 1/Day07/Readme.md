# L1 and L2 Activities :: File Handling
21 Jun 2023
## Level-1 :

Q1. File Copy: Write a C program to copy a file using file operations

 

Q2. Case Handler:
Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Purely Upper Case
if no options are passed then it should be a normal copy
For example, say we have a file f1 with the following content

f1:
-----------------------
This is the file data
testing Case copy
application


./cp -s f1 f2   <br/>
<br/>
f2:
-----------------------
This Is The Tile Data
Testing Case Copy
Application


./cp -l f1 f3  <br/>
<br/>
f3:
-----------------------
this is the tile data
testing case copy
application


./cp -u f1 f4  <br/>
<br/>
f4:
-----------------------
THIS IS THE FILE DATA
TESTING CASE COPY
APPLICATION

./cp f1 f5
Should perform a normal copy
<br/>
<br/>
Q3 . Data Viewer:
Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv

------------------------------------
![image](https://github.com/dibyadas1033/Learning2023/assets/73276223/ef15c349-4d3d-4afa-b0e7-358fca902499)

a. Write a function to extract each line in the .csv file and store it in an array of structures. 

b. Also implement functions to display the contents of the array of structures.

 

## Level-2 : 

1. Sort the above "data.csv" based on the "Temperature" field in descending order

a. Use only file handling concepts

b. Use array of structures and file handling

 

2. Update an entry in the data.csv based on the "EntryNo" field

a. Use only file handling concepts

b. Use array of structures and file handling

 

3. Delete an entry in the file data.csv file  on the "EntryNo" field

a. Use only file handling concepts

b. Use array of structures and file handling
