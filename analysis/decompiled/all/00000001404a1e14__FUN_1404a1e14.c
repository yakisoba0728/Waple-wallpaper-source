// Function: FUN_1404a1e14
// Addr: 1404a1e14
// Size: 1 bytes


void FUN_1404a1e14(char *param_1)

{
  longlong in_RAX;
  char *pcVar1;
  uint unaff_EBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  ulonglong unaff_RBP;
  char *unaff_RSI;
  
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & unaff_EBX;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)unaff_EBX;
  *(char *)(unaff_RBP + in_RAX) = *(char *)(unaff_RBP + in_RAX) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(unaff_RBP & 0xffffffff ^ 0x1d);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[-0x48fffb6b] = pcVar1[-0x48fffb6b] + (char)pcVar1;
  pcVar1 = (char *)((ulonglong)((int)in_RAX + 0x80000f34) ^ 0x1d);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

