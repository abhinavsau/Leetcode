bool isPowerOfFour(int num) {
 
 return num?(!(num&num-1) && num%3==1):0;
    
}