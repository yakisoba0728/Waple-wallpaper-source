// Function: FUN_1404a0bf8
// Addr: 1404a0bf8
// Size: 1 bytes


void FUN_1404a0bf8(uint param_1)

{
  longlong in_RAX;
  char *pcVar1;
  char *unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  
  pcVar1 = (char *)(ulonglong)(param_1 & *(uint *)(in_RAX + 0xb080003));
  *pcVar1 = *pcVar1 + unaff_SPL;
  *unaff_RBX = *unaff_RBX + ((byte)((ulonglong)in_RAX >> 8) & (byte)((uint)*unaff_RSI >> 8));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

