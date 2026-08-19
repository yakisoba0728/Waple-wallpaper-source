// Function: FUN_1404cd010
// Addr: 1404cd010
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd010(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  int unaff_ESP;
  byte *pbVar4;
  
  uVar3 = (uint)in_RAX | *in_RAX;
  bVar2 = (char)uVar3 + 0x82;
  pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  *param_1 = (*param_1 - unaff_ESP) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

