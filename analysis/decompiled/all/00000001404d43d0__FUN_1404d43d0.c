// Function: FUN_1404d43d0
// Addr: 1404d43d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d43d0(char *param_1,byte *param_2)

{
  short in_AX;
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)(uint)(int)in_AX;
  *pcVar1 = *pcVar1 + (byte)in_AX;
  *param_1 = *param_1 + (char)((ushort)in_AX >> 8);
  *param_2 = *param_2 | (byte)in_AX;
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

