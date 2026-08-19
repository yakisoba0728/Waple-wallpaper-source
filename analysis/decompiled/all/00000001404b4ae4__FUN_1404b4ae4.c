// Function: FUN_1404b4ae4
// Addr: 1404b4ae4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b4b1d) overlaps instruction at (ram,0x0001404b4b1b)
    */

void FUN_1404b4ae4(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte *in_RAX;
  undefined7 uVar10;
  byte *pbVar7;
  undefined1 *puVar8;
  uint *puVar9;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  int unaff_EBX;
  ulonglong uVar15;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool bVar16;
  char *pcVar6;
  
  bVar12 = (byte)param_2;
  bVar11 = (byte)param_1;
  *unaff_RDI = *unaff_RDI >> 2 | *unaff_RDI << 6;
  pbVar7 = in_RAX + (longlong)param_2;
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar11;
  bVar5 = (byte)in_RAX - *in_RAX;
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = bVar5 - CARRY1(bVar1,bVar11);
  pcVar6 = (char *)CONCAT71(uVar10,cVar4);
  cVar13 = (char)unaff_EBX;
  bVar14 = (byte)((uint)unaff_EBX >> 8);
  if (cVar4 < '\0') {
    *(char *)param_2 =
         (char)*param_2 + cVar13 + ((byte)in_RAX < *in_RAX || bVar5 < CARRY1(bVar1,bVar11));
    pcVar6[0x1f] = pcVar6[0x1f] + bVar14;
  }
  else {
    *param_1 = *param_1;
    *pcVar6 = *pcVar6 + cVar4;
    pcVar6 = (char *)(CONCAT71(uVar10,cVar4 * '\x02') | 0x10);
    bVar1 = (char)pcVar6 - *pcVar6;
    if ((char)bVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1;
    *(byte *)param_2 = (char)*param_2 + bVar1;
    *(char *)CONCAT71(uVar10,bVar1) = *(char *)CONCAT71(uVar10,bVar1) + bVar1;
    pbVar7 = (byte *)(CONCAT71(uVar10,(bVar1 ^ 8) * '\x02') | 0x10);
    bVar16 = (byte)pbVar7 < *pbVar7;
    cVar4 = (byte)pbVar7 - *pbVar7;
    pcVar6 = (char *)CONCAT71(uVar10,cVar4);
    if (cVar4 < '\0') goto code_r0x0001404b4b31;
  }
  *param_1 = *param_1;
  uVar10 = (undefined7)((ulonglong)pcVar6 >> 8);
  bVar5 = (byte)pcVar6 | *(byte *)((longlong)pcVar6 * 2);
  unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                       CONCAT11(bVar14 | *(byte *)(CONCAT71(uVar10,bVar5) + 3),cVar13));
  bVar16 = CARRY1(bRam00000001204b4f89,bVar5);
  bRam00000001204b4f89 = bRam00000001204b4f89 + bVar5;
  *(char *)param_2 = (char)*param_2 + cVar13 + bVar16;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar12;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar1,bVar12);
  puVar8 = (undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  register0x00000020 = (BADSPACEBASE *)(CONCAT71(uVar10,bVar5 + cVar13) & 0xffffffff);
  *param_1 = *param_1 + (char)register0x00000020;
  *puVar8 = *puVar8;
  bVar16 = false;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)puVar8 >> 8),(char)((ulonglong)puVar8 >> 8));
code_r0x0001404b4b31:
  bVar14 = (byte)unaff_EBX;
  *(byte *)param_2 = (char)*param_2 + bVar14 + bVar16;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar12;
  *param_2 = *param_2 + unaff_EBX + (uint)CARRY1(bVar1,bVar12);
  puVar9 = (uint *)((ulonglong)register0x00000020 & 0xffffffff);
  uVar15 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),(char)pcVar6 + bVar14) & 0xffffffff;
  bVar1 = *param_1;
  bVar5 = (byte)puVar9;
  *param_1 = *param_1 + bVar5;
  *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar1,bVar5);
  uVar3 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar14;
  *(ulonglong *)(uVar15 - 8) = uVar15;
  uVar3 = (uint)CARRY1((byte)uVar3,bVar14);
  uVar2 = (uint)register0x00000020 + *puVar9;
  pbVar7 = (byte *)(ulonglong)(uVar2 + uVar3);
  *(char *)((longlong)param_2 * 2) =
       (*(char *)((longlong)param_2 * 2) - (char)((ulonglong)param_2 >> 8)) -
       (CARRY4((uint)register0x00000020,*puVar9) || CARRY4(uVar2,uVar3));
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar14;
  bVar11 = (bVar11 & 0x1f) % 9;
  bVar5 = pbVar7[(longlong)unaff_RSI * 2];
  pbVar7[(longlong)unaff_RSI * 2] =
       bVar5 << bVar11 | (byte)(CONCAT11(CARRY1(bVar1,bVar14),bVar5) >> 9 - bVar11);
  *(uint *)(pbVar7 + (uVar15 - 8)) = *(uint *)(pbVar7 + (uVar15 - 8)) & (uint)param_2;
  pbVar7[unaff_RBP * 2] = pbVar7[unaff_RBP * 2] + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

