// Function: FUN_1404cc580
// Addr: 1404cc580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc580(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  byte *pbVar4;
  undefined1 *unaff_RBX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar2;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),
                            (char)param_1 + (char)((ulonglong)param_1 >> 8));
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  uVar3 = (uint)in_RAX + iRam000000014feed897 + (uint)CARRY1(bVar1,bVar2);
  pbVar4 = pbVar4 + -1;
  if (pbVar4 == (byte *)0x0 || uVar3 == 0) {
    *unaff_RBX = *unaff_RBX;
    *pbVar4 = *pbVar4 + ((byte)(uVar3 >> 8) | *(byte *)(ulonglong)uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

