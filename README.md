Program #2

COSC 2030

Name: Oreoluwa Adeola Babatunde

Lab section: 10

Competing: YES 

Best run time: 1.94421 seconds on the Hive machine

How to compile on linux/pi: g++ Programmingassingment02.cpp

Anything that doesn't work: Everything works

---
grading 100/100<BR>
* github, compiles, and  run (10 points ) yes
* cover page correct (2 points) yes
* readme updated and correct (2 points) yes
* data structure is binary search tree (25 points) yes
  * issues in the data structure like the destructor
* cleaword method (12 points) yes
* read dictionary (5 points) yes
  * calls clean word
* reads book (5 points) yes
  * calls clean word
* skipped correct (5 points) yes
* spelling checking code correct (10 points) yues
* compare counts are correct (10 points) yes
* format/output correct (10 points) yes
  * spelled and misspelled
  * misspelled file?
* timing code and run time (4 points) yes
* competeing, gears: 0

and Notes:<BR>
* runs, three runs, 7.9, 8.0, and 8.1  even average is above 7.  no gears.
* everything look scorrect.
* tried a couple of things to see why it so slow, when it should be very fast.  I'm only think it's the massives if's.
  * if you had an array of roots, and use a formula  'a' - item[0]  as the index.  it would save you a lot of time?
  * the extra copy of dataItem = root->data; is unnessary, item.compare(root->data) works.
  * that's some ideas to speed it up.
  


