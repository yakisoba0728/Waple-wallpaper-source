// Function: FUN_1404c4ce4
// Addr: 1404c4ce4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4ce4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char unaff_BH;
  int *unaff_RDI;
  int unaff_R13D;
  byte *pbVar5;
  
  iVar3 = unaff_R13D + -0x2d957900;
  uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   CONCAT11((char)((uint)iVar3 >> 8) + unaff_BH,(char)iVar3)) ^ 0x42;
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar1 = *pbVar5;
  bVar2 = (byte)uVar4;
  *pbVar5 = *pbVar5 + bVar2;
  *unaff_RDI = *unaff_RDI + param_1 + (uint)CARRY1(bVar1,bVar2);
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

