/*Write a program using a while loop that repeatedly asks the user to enter the password
 and stops only when the correct password is entered. Finally, display "Login successful!".*/


 #include <stdio.h>
 int main(){
  int password;
  printf("enter the password: ");
  scanf("%d", &password);
  
  while(password != 123){
    printf("wrong password\n");
    printf("enter the password again: ");
    scanf("%d", &password);
  }

  printf("login successful!");


  return 0;
 }