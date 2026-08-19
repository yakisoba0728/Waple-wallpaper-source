// Function: FUN_1404d3aa4
// Addr: 1404d3aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3aa4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar11;
  uint in_EAX;
  uint uVar6;
  int iVar7;
  int *piVar9;
  byte bVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  char *unaff_RDI;
  bool bVar13;
  byte *pbVar8;
  char *pcVar10;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = in_EAX & 0x20000688;
  pbVar8 = (byte *)(ulonglong)uVar6;
  pbVar8[unaff_RBP * 2] = pbVar8[unaff_RBP * 2] + unaff_BL;
  bVar3 = (byte)uVar6;
  *pbVar8 = *pbVar8 | bVar3;
  bVar11 = (byte)(uVar6 >> 8);
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar11 - bVar12,bVar3));
  bVar4 = bVar3 + *(byte *)(ulonglong)uVar6;
  bVar13 = CARRY1(bVar3,*(byte *)(ulonglong)uVar6) || CARRY1(bVar4,bVar11 < bVar12);
  bVar4 = bVar4 + (bVar11 < bVar12);
  bVar3 = bVar4 - 0x1c;
  uVar2 = CONCAT31((int3)(uVar6 >> 8),bVar3 + bVar13);
  uVar6 = (uint)(0x1b < bVar4 || CARRY1(bVar3,bVar13));
  uVar1 = uVar2 + *(uint *)(ulonglong)uVar2;
  bVar13 = CARRY4(uVar2,*(uint *)(ulonglong)uVar2) || CARRY4(uVar1,uVar6);
  iVar7 = uVar1 + uVar6;
  bVar3 = (byte)((uint)iVar7 >> 8);
  bVar4 = bVar3 + (byte)param_2;
  piVar9 = (int *)((ulonglong)
                   CONCAT31((int3)(CONCAT22((short)((uint)iVar7 >> 0x10),
                                            CONCAT11(bVar4 + bVar13,(char)iVar7)) >> 8),
                            (char)iVar7 + (CARRY1(bVar3,(byte)param_2) || CARRY1(bVar4,bVar13))) |
                  0xc4);
  iVar7 = (int)piVar9 - *piVar9;
  pbVar8 = (byte *)(param_2 + CONCAT71(unaff_00000019,unaff_BL));
  *pbVar8 = *pbVar8 | bVar12;
  bVar4 = (byte)iVar7;
  cVar5 = bVar4 + 100;
  pcVar10 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),cVar5);
  *pcVar10 = (*pcVar10 - cVar5) - (0x9b < bVar4);
  *unaff_RDI = *unaff_RDI << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

