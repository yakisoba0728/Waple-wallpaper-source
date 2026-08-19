// Function: FUN_1404d5274
// Addr: 1404d5274
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5274(char *param_1,int param_2)

{
  longlong in_RAX;
  uint uVar1;
  byte in_CF;
  
  uVar1 = param_2 + *(int *)(in_RAX + 0x3e) + (uint)in_CF;
  param_1[(ulonglong)uVar1 * 2 + 0x4d] = param_1[(ulonglong)uVar1 * 2 + 0x4d] + (char)(uVar1 >> 8);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

