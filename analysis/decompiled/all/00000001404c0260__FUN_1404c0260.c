// Function: FUN_1404c0260
// Addr: 1404c0260
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0260(char *param_1,char *param_2)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x26003c0;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

