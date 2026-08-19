// Function: FUN_1404c4b28
// Addr: 1404c4b28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4b28(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char unaff_BH;
  int *unaff_RDI;
  int unaff_retaddr;
  byte *pbVar4;
  
  *in_RAX = *in_RAX + (int)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar3 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) + unaff_BH,(char)in_RAX)) ^ 0x42;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar1 = *pbVar4;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 + bVar2;
  *unaff_RDI = (*unaff_RDI - unaff_retaddr) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

