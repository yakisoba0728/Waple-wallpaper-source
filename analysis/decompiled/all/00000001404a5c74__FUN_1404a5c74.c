// Function: FUN_1404a5c74
// Addr: 1404a5c74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5cae) overlaps instruction at (ram,0x0001404a5cac)
    */

void FUN_1404a5c74(char *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar8;
  uint *in_RAX;
  undefined6 uVar10;
  int *piVar6;
  byte bVar11;
  byte bVar12;
  longlong unaff_RBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [24];
  byte *pbVar7;
  byte bVar9;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | bVar2;
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  uVar10 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar8 = bVar9 + bVar12;
  piVar6 = (int *)CONCAT62(uVar10,CONCAT11(bVar8 * '\x02',
                                           bVar2 + *(char *)CONCAT62(uVar10,CONCAT11(bVar8,bVar2)) +
                                           CARRY1(bVar9,bVar12)));
  iVar4 = (int)piVar6 + *piVar6 + (uint)CARRY1(bVar8,bVar8);
  bVar2 = (byte)((uint)iVar4 >> 8);
  bVar8 = bVar2 + (byte)param_2;
  uVar1 = (undefined3)(CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(bVar8,(char)iVar4)) >> 8);
  bVar2 = (char)iVar4 + CARRY1(bVar2,(byte)param_2);
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  auStackX_10[unaff_RBX + -0x10] = auStackX_10[unaff_RBX + -0x10] + bVar12;
  param_2[-0x5d91fff8] = param_2[-0x5d91fff8] & bVar8;
  *pbVar7 = *pbVar7 | bVar2;
  if (*pbVar7 == 0) {
    bVar2 = (bVar2 ^ 0x1a) * '\x02';
    pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    *pbVar7 = *pbVar7 | bVar2;
    bVar2 = in((short)param_2);
    pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    *pbVar7 = *pbVar7 | bVar2;
    *param_1 = *param_1 + (char)auStackX_8;
    *pbVar7 = *pbVar7 + bVar2;
    pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2 * '\x02');
    *pbVar7 = *pbVar7 | bVar2 * '\x02';
    bVar2 = in((short)param_2);
    pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
    *pbVar7 = *pbVar7 | bVar2;
    *param_1 = *param_1 + (char)auStackX_10;
    *param_2 = *param_2 + bVar11;
    *pbVar7 = *pbVar7 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar2;
  *unaff_RDI = *unaff_RDI + bVar11;
  uVar5 = CONCAT31(uVar1,bVar2) | 0xc540f00;
  pbVar7 = (byte *)(ulonglong)uVar5;
  bVar8 = *unaff_RDI;
  bVar9 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar11;
  if (!CARRY1(bVar8,bVar11)) {
    if (!SCARRY1(bVar9,bVar11)) {
      uVar5 = uVar5 + 0x34050002;
      uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
      param_1[(ulonglong)uVar5 + 0x8ad3c00] = (byte)param_1[(ulonglong)uVar5 + 0x8ad3c00] >> 1;
      cVar3 = (char)uVar5;
      uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11((char)(uVar5 >> 8) + cVar3,cVar3));
      *param_1 = *param_1 + (char)auStackX_8;
      *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar3;
      bVar2 = *unaff_RSI;
      pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar2);
      *pbVar7 = *pbVar7 | bVar2;
      *pbVar7 = *pbVar7 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar7 = *pbVar7 | bVar2;
  *pbVar7 = *pbVar7 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

