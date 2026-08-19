// Function: FUN_1404ab6c4
// Addr: 1404ab6c4
// Size: 1 bytes


void FUN_1404ab6c4(undefined8 param_1)

{
  uint uVar1;
  byte *in_RAX;
  uint *puVar2;
  undefined6 uVar3;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  *in_RAX = *in_RAX | (byte)in_RAX;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (byte)in_RAX + (char)((ulonglong)in_RAX >> 8));
  *puVar2 = *puVar2 | (uint)puVar2;
  uVar1 = (uint)puVar2 | 0x5001174;
  LocalDescriptorTableRegister(*(undefined2 *)(in_FS_OFFSET + (ulonglong)uVar1));
  uVar1 = uVar1 & 0x254b000f;
  verr();
  *(undefined1 *)CONCAT62(uVar3,CONCAT11(0x4a,(char)param_1)) =
       *(undefined1 *)CONCAT62(uVar3,CONCAT11(0x4a,(char)param_1));
  *unaff_RSI = *unaff_RSI + (char)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

