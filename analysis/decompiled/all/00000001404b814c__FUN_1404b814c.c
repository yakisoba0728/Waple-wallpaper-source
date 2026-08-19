// Function: FUN_1404b814c
// Addr: 1404b814c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b814c(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  char *in_RAX;
  float10 in_ST0;
  float10 in_ST1;
  
  fRam000000018a396153 = (float)in_ST0;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  fRam000000015e24c85f = (float)in_ST1;
  uVar1 = in(param_2);
  *param_4 = *param_4 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

