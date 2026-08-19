// Function: FUN_1404a5498
// Addr: 1404a5498
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5522) overlaps instruction at (ram,0x0001404a5521)
    */

void FUN_1404a5498(uint *param_1,int *param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar8;
  byte *in_RAX;
  byte *pbVar7;
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
  undefined1 in_CF;
  bool bVar14;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  *param_1 = (uint)(CONCAT14(in_CF,*param_1) >> 8) | *param_1 << 0x19;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x21004a + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + cVar10;
  bVar4 = *in_RAX;
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar3;
  *(uint *)in_RAX = (*(int *)in_RAX - unaff_EBX) - (uint)CARRY1(bVar4,bVar3);
  *in_RAX = *in_RAX | bVar3;
  *param_1 = *param_1 >> 8 | *param_1 << 0x19;
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x21004a + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + cVar10;
  *in_RAX = *in_RAX + bVar3;
  bVar13 = (byte)unaff_EBX;
  *in_RAX = *in_RAX + bVar13;
  *in_RAX = *in_RAX | bVar3;
  *(int *)in_RAX = *(int *)in_RAX - unaff_EBX;
  *in_RAX = *in_RAX | bVar3;
  *(char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a) = cVar10;
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  *(byte *)param_1 = (byte)*param_1 + cVar8;
  bVar4 = (byte)param_1;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar4;
  uVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((cVar8 + bVar11) * '\x02',bVar3 + 1)) + 0x7c40001;
  pbVar7 = (byte *)(ulonglong)uVar6;
  *(uint *)pbVar7 = *(int *)pbVar7 + uVar6;
  if (*(int *)pbVar7 == 0) {
    uVar6 = *param_1;
    *(byte *)param_1 = (byte)*param_1 + bVar13;
    *pbVar7 = (*pbVar7 - bVar4) - CARRY1((byte)uVar6,bVar13);
    pbVar9 = pbVar7 + 0x1004a53;
    bVar14 = CARRY1(*pbVar9,bVar4);
    *pbVar9 = *pbVar9 + bVar4;
  }
  else {
    *(uint *)pbVar7 = *(int *)pbVar7 + uVar6;
    uVar6 = uVar6 | *(uint *)(in_FS_OFFSET + (longlong)param_1);
    pbVar7 = (byte *)(ulonglong)uVar6;
    pbVar9 = (byte *)((longlong)param_2 + 1 + (longlong)param_1);
    *pbVar9 = *pbVar9 + cVar10;
    *pbVar7 = *pbVar7 + bVar13;
    bVar4 = (byte)uVar6;
    *pbVar7 = *pbVar7 | bVar4;
    *(int *)pbVar7 = *(int *)pbVar7 - unaff_EBX;
    *pbVar7 = *pbVar7 | bVar4;
    *(char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a) = cVar10;
    bVar14 = CARRY1((byte)*param_1,bVar4);
    *(byte *)param_1 = (byte)*param_1 + bVar4;
  }
  *param_2 = (*param_2 - (int)param_1) - (uint)bVar14;
  bVar14 = CARRY1((byte)*param_1,bVar13);
  *(byte *)param_1 = (byte)*param_1 + bVar13;
  pbVar9 = pbVar7 + in_FS_OFFSET;
  bVar4 = *pbVar9;
  bVar5 = (byte)pbVar7;
  bVar3 = *pbVar9;
  *pbVar9 = bVar3 + bVar5 + bVar14;
  *(uint *)(unaff_RDI + (longlong)param_1) =
       (*(int *)(unaff_RDI + (longlong)param_1) - unaff_ESI) -
       (uint)(CARRY1(bVar4,bVar5) || CARRY1(bVar3 + bVar5,bVar14));
  uVar6 = *param_1;
  uVar2 = *param_1;
  *(byte *)param_1 = (byte)*param_1 + bVar13;
  if (!CARRY1((byte)uVar6,bVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar9 = (byte *)((longlong)param_1 + -1);
  if (pbVar9 == (byte *)0x0 || (byte)*param_1 == 0) {
    if (!SCARRY1((byte)uVar2,bVar13)) {
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
  cVar8 = *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10));
  *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) + (char)pbVar9;
  if (SCARRY1(cVar8,(char)pbVar9)) {
    pbVar7 = (byte *)(ulonglong)((uint)pbVar7 | 0x8af42b00);
  }
  *pbVar7 = *pbVar7 + (char)((ulonglong)pbVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

