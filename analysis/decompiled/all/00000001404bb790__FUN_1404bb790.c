// Function: FUN_1404bb790
// Addr: 1404bb790
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb790(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  byte *pbVar7;
  byte bVar9;
  undefined6 uVar10;
  byte unaff_BL;
  byte bVar11;
  byte unaff_BH;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_8 [8];
  uint *puVar6;
  byte bVar8;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  uVar4 = in_EAX + 0xfe000fd4;
  puVar6 = (uint *)(ulonglong)uVar4;
  if (in_EAX < 0x1fff02c) {
    *param_1 = *param_1 + 1;
    puVar6 = (uint *)((ulonglong)&stack0x00000000 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar4;
    bVar9 = 0x4b;
    *param_1 = *param_1 + (char)((ulonglong)puVar6 >> 8);
    *(char *)puVar6 = (char)*puVar6;
    bVar13 = SCARRY1(unaff_BL,'K');
    bVar11 = unaff_BL + 0x4b;
    bVar12 = unaff_BL == 0xb5;
code_r0x0001404bb7c9:
    if (bVar13 == (char)bVar11 < '\0') {
code_r0x0001404bb7cb:
      pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                       CONCAT44(unaff_00000034,unaff_ESI) * 4);
      *pcVar1 = *pcVar1 + (char)puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    param_1[0x7d] = param_1[0x7d] + bVar8;
    *puVar6 = *puVar6 & uVar4;
    *param_4 = *param_4;
    cVar2 = (char)uVar4;
    *(char *)puVar6 = (char)*puVar6 + cVar2;
    bVar9 = cVar3 + unaff_BH;
    bVar12 = bVar9 == 0;
    if (SCARRY1(cVar3,unaff_BH) != (char)bVar9 < '\0') {
      if (SCARRY1(cVar3,unaff_BH) == (char)bVar9 < '\0') goto code_r0x0001404bb7cb;
      goto code_r0x0001404bb7ec;
    }
    param_1[0x7d] = param_1[0x7d] + bVar8;
    *puVar6 = *puVar6 & uVar4;
    *param_4 = *param_4;
    *(char *)puVar6 = (char)*puVar6 + cVar2;
    if (SCARRY1(unaff_BL,bVar9) == (char)(unaff_BL + bVar9) < '\0') {
      bVar12 = CARRY1(bVar9,unaff_BH);
      bVar13 = SCARRY1(bVar9,unaff_BH);
      bVar9 = bVar9 + unaff_BH;
      if (bVar13 == (char)bVar9 < '\0') {
        pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar1 = *pcVar1 + bVar8;
        bVar13 = SCARRY1((char)*puVar6,cVar2);
        *(char *)puVar6 = (char)*puVar6 + cVar2;
        *param_1 = (char)*param_1 >> 0x13;
        bVar11 = *param_1;
        bVar12 = *param_1 == 0;
        goto code_r0x0001404bb7c9;
      }
      puVar6[4] = puVar6[4] + unaff_ESI + (uint)bVar12;
    }
    else {
      uVar5 = in_EAX + 0xfe023c4 + (uint)CARRY1(unaff_BL,bVar9);
      puVar6 = (uint *)(ulonglong)uVar5;
      if (SCARRY4(uVar4,0x11e013f0) != SCARRY4(in_EAX + 0xfe023c4,(uint)CARRY1(unaff_BL,bVar9))) {
        cVar3 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
        *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
             *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar8;
        if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0' ||
            SCARRY1(cVar3,bVar8) != *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar11 = (byte)uVar5;
        *(byte *)puVar6 = (char)*puVar6 + bVar11;
        bVar8 = *param_1;
        bVar9 = (byte)(uVar5 >> 8);
        *param_1 = *param_1 + bVar9;
        pbVar7 = (byte *)((longlong)puVar6 * 2);
        bVar12 = CARRY1(*pbVar7,bVar11) || CARRY1(*pbVar7 + bVar11,CARRY1(bVar8,bVar9));
        *pbVar7 = *pbVar7 + bVar11 + CARRY1(bVar8,bVar9);
        bVar8 = bVar9 + bVar11 + bVar12;
        uVar4 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar8,bVar11));
        pbVar7 = (byte *)(ulonglong)uVar4;
        *(uint *)pbVar7 =
             (*(int *)pbVar7 - uVar4) -
             (uint)(CARRY1(bVar9,bVar11) || CARRY1(bVar9 + bVar11,bVar12));
        *pbVar7 = *pbVar7 | bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *unaff_RDI = *unaff_RDI ^ (byte)param_1;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    *(char *)puVar6 = (char)*puVar6 + (char)puVar6;
    *puVar6 = *puVar6 & (uint)param_1;
    cVar3 = (char)puVar6 + (char)*puVar6;
    puVar6 = (uint *)CONCAT62((int6)((ulonglong)puVar6 >> 0x10),
                              CONCAT11((byte)((ulonglong)puVar6 >> 8) | bVar8,cVar3));
    *(char *)puVar6 = (char)*puVar6 - cVar3;
    bVar12 = (char)*puVar6 == '\0';
  }
code_r0x0001404bb7ec:
  if (param_1 + -1 != (byte *)0x0 && !bVar12) {
    *(char *)((longlong)puVar6 + -0x49) =
         *(char *)((longlong)puVar6 + -0x49) + (char)((ulonglong)puVar6 >> 8);
    *param_4 = *param_4 + (char)register0x00000020;
    *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) =
         *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) | (byte)puVar6;
    *(char *)puVar6 = (char)*puVar6 + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 & (uint)puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

