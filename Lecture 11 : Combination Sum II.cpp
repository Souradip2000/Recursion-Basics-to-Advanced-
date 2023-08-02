/*
  If it is a set of n elements, total number of subsets will be 2^n. 
  Thus the time complexity will be 2^n.
  But we will also be copying sub sequences. 
  That will take k time.
  Thus,
        Time complexity : O( 2^n*k )      where k--> avg. size of each subsequence
        Space complexity : O( k*x )       where x--> number of combinations possible 
*/
