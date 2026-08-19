// Function: FUN_1404ae4c8
// Addr: 1404ae4c8
// Size: 1 bytes


void FUN_1404ae4c8(char *param_1)

{
  int iVar1;
  int *in_RAX;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  
  iVar1 = *in_RAX;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RBX = *unaff_RBX +
               ((byte)((uint)in_RAX + iVar1 + (uint)((uint)in_RAX < 0x3dc30013) >> 8) &
               (byte)((uint)*unaff_RSI >> 8));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

