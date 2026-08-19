// Function: FUN_1404a0b5c
// Addr: 1404a0b5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0b5c(char *param_1,char *param_2)

{
  byte *pbVar1;
  undefined4 *in_RAX;
  char unaff_BL;
  
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (char)param_2;
  pbVar1 = (byte *)((longlong)in_RAX + -0x7f01fffd);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  *param_1 = *param_1 + (char)in_RAX + (char)*in_RAX;
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

