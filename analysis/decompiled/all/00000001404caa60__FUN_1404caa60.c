// Function: FUN_1404caa60
// Addr: 1404caa60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404caa60(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  uVar1 = in_EAX + 0x74050002;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

