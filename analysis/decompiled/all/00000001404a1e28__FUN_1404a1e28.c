// Function: FUN_1404a1e28
// Addr: 1404a1e28
// Size: 1 bytes


void FUN_1404a1e28(char *param_1)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_SPL;
  ulonglong unaff_RBP;
  char *unaff_RSI;
  
  pcVar1 = (char *)(in_RAX ^ 0x1d);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[-0x48fffb6b] = pcVar1[-0x48fffb6b] + (char)pcVar1;
  pcVar1 = (char *)(unaff_RBP & 0xffffffff ^ 0x1d);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)pcVar1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

