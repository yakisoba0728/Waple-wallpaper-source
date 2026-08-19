// Function: FUN_1404a54c4
// Addr: 1404a54c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5522) overlaps instruction at (ram,0x0001404a5521)
    */

void FUN_1404a54c4(byte *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  char cVar10;
  byte bVar11;
  undefined6 uVar12;
  byte bVar13;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar14;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  uVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(((char)((ulonglong)in_RAX >> 8) + bVar11) * '\x02',
                                 (char)in_RAX + '\x01')) + 0x7c40001;
  pbVar7 = (byte *)(ulonglong)uVar6;
  *(uint *)pbVar7 = *(int *)pbVar7 + uVar6;
  bVar13 = (byte)unaff_EBX;
  if (*(int *)pbVar7 == 0) {
    bVar4 = *param_1;
    *param_1 = *param_1 + bVar13;
    bVar8 = (byte)param_1;
    *pbVar7 = (*pbVar7 - bVar8) - CARRY1(bVar4,bVar13);
    pbVar9 = pbVar7 + 0x1004a53;
    bVar14 = CARRY1(*pbVar9,bVar8);
    *pbVar9 = *pbVar9 + bVar8;
  }
  else {
    *(uint *)pbVar7 = *(int *)pbVar7 + uVar6;
    uVar3 = *(uint *)(param_1 + in_FS_OFFSET);
    pbVar7 = (byte *)(ulonglong)(uVar6 | uVar3);
    param_1[(longlong)param_2 + 1] = param_1[(longlong)param_2 + 1] + cVar10;
    *pbVar7 = *pbVar7 + bVar13;
    bVar4 = (byte)(uVar6 | uVar3);
    *pbVar7 = *pbVar7 | bVar4;
    *(int *)pbVar7 = *(int *)pbVar7 - unaff_EBX;
    *pbVar7 = *pbVar7 | bVar4;
    *(char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a) = cVar10;
    bVar14 = CARRY1(*param_1,bVar4);
    *param_1 = *param_1 + bVar4;
  }
  *param_2 = (*param_2 - (int)param_1) - (uint)bVar14;
  bVar4 = *param_1;
  *param_1 = *param_1 + bVar13;
  pbVar9 = pbVar7 + in_FS_OFFSET;
  bVar8 = *pbVar9;
  bVar5 = (byte)pbVar7;
  bVar1 = *pbVar9;
  *pbVar9 = bVar1 + bVar5 + CARRY1(bVar4,bVar13);
  *(uint *)(param_1 + unaff_RDI) =
       (*(int *)(param_1 + unaff_RDI) - unaff_ESI) -
       (uint)(CARRY1(bVar8,bVar5) || CARRY1(bVar1 + bVar5,CARRY1(bVar4,bVar13)));
  bVar4 = *param_1;
  bVar8 = *param_1;
  *param_1 = *param_1 + bVar13;
  if (!CARRY1(bVar4,bVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar9 = param_1 + -1;
  if (pbVar9 == (byte *)0x0 || *param_1 == 0) {
    if (!SCARRY1(bVar8,bVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar7 = *pbVar7 + bVar5;
    *param_2 = *param_2 + (int)pbVar9;
  }
  else {
    cVar10 = cVar10 + *pbVar7;
    *pbVar9 = *pbVar9 + bVar5;
    pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),bVar5 | *(byte *)((longlong)pbVar7 * 2)
                             );
  }
  bVar11 = bVar11 | pbVar9[CONCAT44(unaff_00000034,unaff_ESI)];
  cVar2 = *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10));
  *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) + (char)pbVar9;
  if (SCARRY1(cVar2,(char)pbVar9)) {
    pbVar7 = (byte *)(ulonglong)((uint)pbVar7 | 0x8af42b00);
  }
  *pbVar7 = *pbVar7 + (char)((ulonglong)pbVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

