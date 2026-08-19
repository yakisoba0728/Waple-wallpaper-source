// Function: FUN_1404c03d4
// Addr: 1404c03d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c03d4(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char unaff_SPL;
  char *pcVar2;
  
  uVar1 = in(param_2);
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x4bffd7d9] = pcVar2[-0x4bffd7d9] + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

