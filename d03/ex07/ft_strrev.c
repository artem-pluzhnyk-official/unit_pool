void ft_putchar(char c){
  write(1,&c,1);
}


char  *ft_strrev(char *str){
  int i =0;
 
  while (str[i] != '\n'){
    i++;
  }
  i = i-1;
  char str1[i];
  int j = 0;
  while (i >= 0 ){
    str1[j++] = str[i--];
  }
  int k =0;
    while (k <= j){
     ft_putchar(str1[k++]);
   }
    // printf("str1 = %s",str1);
  return str1;
}

int main()
{
  char *str = "hello\n";
  char *mm = ft_strrev(str);
  ft_putchar('\n');
}
