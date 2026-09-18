void numreverse(int * ptr){

  
  unsigned char * byte = (unsigned char *)ptr;
  int left = 0, right = sizeof(int)-1;
    unsigned char temp;
    while (left < right) {
        temp = byte[left];
        byte[left] = byte[right];
        byte[right] = temp;
        right--;
        left++;
    }
}
