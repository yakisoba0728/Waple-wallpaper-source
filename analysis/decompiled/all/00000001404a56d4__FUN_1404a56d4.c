// Function: FUN_1404a56d4
// Addr: 1404a56d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a56d4(char *param_1)

{
  uint in_EAX;
  undefined8 unaff_RBP;
  
  *(undefined8 *)((ulonglong)in_EAX - 8) = unaff_RBP;
  *param_1 = *param_1 + (char)((ulonglong)in_EAX - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

