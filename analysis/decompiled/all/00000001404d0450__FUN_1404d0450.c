// Function: FUN_1404d0450
// Addr: 1404d0450
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0450(char param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RBX;
  byte in_CF;
  char *pcVar2;
  
  uVar1 = in_EAX + param_2 + (uint)in_CF;
  pcVar2 = (char *)(ulonglong)uVar1;
  cRam000000014bad10c9 = cRam000000014bad10c9 + param_1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[unaff_RBX + -0x62d7ffb3] = pcVar2[unaff_RBX + -0x62d7ffb3] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

