// Function: FUN_1404c6ab4
// Addr: 1404c6ab4
// Size: 1 bytes


void FUN_1404c6ab4(char *param_1)

{
  undefined4 uVar1;
  uint in_EAX;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  uVar1 = *(undefined4 *)(in_FS_OFFSET + (ulonglong)(in_EAX | 0x50006d4));
  param_1[0x2f] = (byte)param_1[0x2f] >> 1;
  *param_1 = *param_1 + ((byte)((in_EAX | 0x50006d4) >> 8) | (byte)((uint)uVar1 >> 8));
  *unaff_RDI = *unaff_RDI + (char)param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

