// Function: FUN_1404b7a80
// Addr: 1404b7a80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7a80(char *param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RBP;
  char *pcVar2;
  
  uVar1 = (in_EAX + -0x49ede000) - (uint)((*(ulonglong *)(unaff_RBP + 8) & 1) != 0);
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x36ffe263] = pcVar2[-0x36ffe263] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 +
             (char)((uVar1 + 0xb6122000) - (uint)((*(ulonglong *)(unaff_RBP + 0x10) & 1) != 0) >> 8)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

