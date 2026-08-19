// Function: FUN_1404a947c
// Addr: 1404a947c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a947c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *in_RAX;
  longlong unaff_RBX;
  int unaff_ESP;
  
  *(int *)(unaff_RBX + -0x5bfefff4) = *(int *)(unaff_RBX + -0x5bfefff4) - unaff_ESP;
  if ((char)in_RAX < '\0') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = *param_1 + (char)unaff_ESP;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_4 = *param_4 + (char)unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

