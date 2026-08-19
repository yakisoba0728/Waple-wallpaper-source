// Function: FUN_1404b8f88
// Addr: 1404b8f88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b8ff3) */

void FUN_1404b8f88(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  byte bVar7;
  byte *in_RAX;
  undefined7 uVar8;
  uint *puVar6;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  byte unaff_BL;
  char unaff_BH;
  uint unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar16;
  char *pcVar5;
  undefined7 uVar15;
  
  bVar7 = *param_4;
  bVar3 = (byte)in_RAX;
  *param_4 = *param_4 + bVar3;
  lVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + *in_RAX + CARRY1(bVar7,bVar3));
  bVar7 = *param_2;
  bVar11 = (byte)param_2;
  *param_2 = *param_2 + bVar11;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = bVar3 + *in_RAX + CARRY1(bVar7,bVar11);
  pcVar5 = (char *)CONCAT71(uVar8,cVar4);
  pcVar12 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) + param_2[lVar9] +
                                      (CARRY1(bVar3,*in_RAX) ||
                                      CARRY1(bVar3 + *in_RAX,CARRY1(bVar7,bVar11))),bVar11));
  cVar1 = *pcVar12;
  *pcVar12 = *pcVar12 + bVar11;
  uVar15 = (undefined7)((ulonglong)pcVar12 >> 8);
  pcVar13 = (char *)CONCAT71(uVar15,0xe);
  if (lVar9 == 1 || *pcVar12 == '\0') {
    if (SCARRY1(cVar1,bVar11)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  lVar10 = lVar9 + -2;
  if (lVar10 != 0 && *pcVar12 == '\0') {
    pcVar5 = (char *)(CONCAT71(uVar8,cVar4) ^ 10);
    pbVar14 = (byte *)(pcVar5 + -0x35ffe11d);
    bVar7 = (byte)((ulonglong)in_RAX >> 8);
    bVar16 = CARRY1(*pbVar14,bVar7);
    *pbVar14 = *pbVar14 + bVar7;
  }
  else {
    *pcVar13 = *pcVar13 + cVar4;
    lVar10 = lVar9 + -3;
    if (lVar10 == 0) {
      pcVar12 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b);
      *pcVar12 = *pcVar12 + unaff_BH;
      *pcVar5 = *pcVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (lVar10 == 0) {
      *pcVar5 = *pcVar5 + cVar4;
      bVar16 = false;
      pcVar13 = (char *)CONCAT71(uVar15,0xe);
      goto code_r0x0001404b8ff1;
    }
    bVar16 = 0xf1 < (byte)lVar10;
    pcVar13 = (char *)CONCAT71(uVar15,(byte)lVar10 + 0xe);
  }
  if (lVar10 != 0) {
    *pcVar5 = *pcVar5 + (char)((ulonglong)pcVar13 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404b8ff1:
  pbVar14 = (byte *)(pcVar5 + in_FS_OFFSET);
  bVar7 = *pbVar14;
  bVar3 = *pbVar14 + (byte)pcVar5;
  *pbVar14 = bVar3 + bVar16;
  pbVar14 = (byte *)CONCAT62((int6)((ulonglong)pcVar13 >> 0x10),
                             CONCAT11(((char)((ulonglong)pcVar13 >> 8) - *unaff_RDI) -
                                      (CARRY1(bVar7,(byte)pcVar5) || CARRY1(bVar3,bVar16)),
                                      (char)pcVar13));
  bVar7 = *pbVar14;
  *pbVar14 = *pbVar14 + unaff_BL;
  puVar6 = (uint *)((ulonglong)pbVar14 & 0xffffffff);
  uVar2 = (uint)&stack0xfffffffffffffff8 + (uint)pbVar14;
  puVar6[4] = puVar6[4] + unaff_ESI +
              (uint)(CARRY4((uint)&stack0xfffffffffffffff8,(uint)pbVar14) ||
                    CARRY4(uVar2,(uint)CARRY1(bVar7,unaff_BL)));
  *(uint **)((ulonglong)(uVar2 + CARRY1(bVar7,unaff_BL)) - 8) = puVar6;
  *puVar6 = *puVar6 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

