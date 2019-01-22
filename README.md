# Stable-vs-Unstable-Sort

A simple test to showcase the differences between a stable sort and an unstable sort in C++.

A stable sort preserves the original order of equivalent elements in a list. An unstable sort does not preserve the original order of equivalent elements. To showcase this, I created a list of 20 names with many last names that are the same. The names are sorted by first name and then sorted by last name. The first output sorts with two unstable sorts. The second output first sorts with an unstable sort, then a stable sort. The first output will run faster, as the time complexity of the unstable sort in C++ is greater than stable sort. However, as one can see in the example output, the order of equivalent items will not be preserved. 
