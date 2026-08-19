// Function: FUN_1404b798c
// Addr: 1404b798c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b798c(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  short in_AX;
  uint uVar1;
  byte in_CF;
  char *pcVar2;
  
  uVar1 = (in_AX + -0x49ede000) - (uint)in_CF;
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x68] = pcVar2[-0x68] + (char)uVar1;
  in(param_2);
  *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

