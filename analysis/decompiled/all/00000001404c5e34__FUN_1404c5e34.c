// Function: FUN_1404c5e34
// Addr: 1404c5e34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5e34(char *param_1,undefined8 param_2)

{
  int in_EAX;
  char *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)((uint)(in_EAX + 0x20000634) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

