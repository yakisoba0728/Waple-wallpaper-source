// Function: FUN_1404aec24
// Addr: 1404aec24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aec82) overlaps instruction at (ram,0x0001404aec81)
    */

void FUN_1404aec24(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *in_RAX;
  byte bVar12;
  char cVar13;
  byte bVar14;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar15;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar16;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined1 auStack_8 [8];
  uint *puVar11;
  
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  cVar13 = (char)param_2;
  bVar12 = (byte)param_1;
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + cVar13;
  param_1[param_2] = param_1[param_2] + bVar14;
  pbVar1 = (byte *)((longlong)in_RAX + 0x76);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar14;
  uVar7 = (uint)in_RAX + *in_RAX;
  iVar4 = uVar7 + CARRY1(bVar3,bVar14);
  uVar5 = (uint)(short)iVar4;
  puVar11 = (uint *)(ulonglong)uVar5;
  if ((CARRY4((uint)in_RAX,*in_RAX) || CARRY4(uVar7,(uint)CARRY1(bVar3,bVar14))) || iVar4 == 0) {
code_r0x0001404aec46:
    *param_1 = *param_1;
    puVar11 = (uint *)CONCAT62((int6)((ulonglong)puVar11 >> 0x10),
                               CONCAT11(-((byte)puVar11 < *(byte *)((longlong)puVar11 * 2)),
                                        (byte)puVar11 - *(byte *)((longlong)puVar11 * 2)));
    uVar7 = ((uint)puVar11 | *puVar11) + 0x20000834;
    puVar11 = (uint *)(ulonglong)uVar7;
    if ((int)uVar7 < 0) {
      pbVar1 = (byte *)(unaff_RDI + 0x79);
      bVar3 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar12;
      register0x00000020 = (BADSPACEBASE *)auStack_8;
      iVar4 = uVar7 + *puVar11 + (uint)CARRY1(bVar3,bVar12) + 0x1421004a +
              (uint)(CARRY4(uVar7,*puVar11) || CARRY4(uVar7 + *puVar11,(uint)CARRY1(bVar3,bVar12)));
      uVar7 = CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + -0xc);
code_r0x0001404aec66:
      bVar16 = 0xb0fff5ab < uVar7;
      puVar11 = (uint *)(ulonglong)(uVar7 + 0x4f000a54);
      if (-1 < (int)(uVar7 + 0x4f000a54)) {
code_r0x0001404aec82:
        uVar7 = (int)puVar11 + *puVar11 + (uint)bVar16;
        puVar11 = (uint *)(ulonglong)uVar7;
        bVar16 = (int)uVar7 < 0;
        if (!bVar16) goto code_r0x0001404aec86;
        goto code_r0x0001404aec71;
      }
    }
    else {
      bVar16 = false;
      bVar3 = (byte)uVar7 | (byte)*puVar11;
      puVar11 = (uint *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar3);
      if (-1 < (char)bVar3) goto code_r0x0001404aec82;
    }
  }
  else {
    param_1[param_2 * 2] = param_1[param_2 * 2] + unaff_BH;
    *param_1 = *param_1;
    *(char *)puVar11 = (char)*puVar11 + (char)iVar4;
    pbVar1 = (byte *)((longlong)puVar11 + 0x76);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar14;
    uVar10 = (uint)CARRY1(bVar3,bVar14);
    uVar7 = *puVar11;
    uVar9 = uVar5 + *puVar11;
    uVar6 = (uint)(short)(uVar9 + uVar10);
    puVar11 = (uint *)(ulonglong)uVar6;
    if ((!CARRY4(uVar5,uVar7) && !CARRY4(uVar9,uVar10)) && uVar9 + uVar10 != 0) {
      param_1[param_2 * 2] = param_1[param_2 * 2] + unaff_BH;
      goto code_r0x0001404aec46;
    }
    uVar7 = (uint)(CARRY4(uVar5,uVar7) || CARRY4(uVar9,uVar10));
    uVar5 = uVar6 + *puVar11 + uVar7;
    if ((int)uVar5 < 0) {
      pcVar2 = (char *)((longlong)(ulonglong)uVar5 + 0x15);
      *pcVar2 = *pcVar2 + cVar13;
      *param_1 = *param_1;
      uVar7 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + '\x04');
      (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar13;
      goto code_r0x0001404aec66;
    }
    uVar7 = uVar5 + *(int *)(ulonglong)uVar5 +
            (uint)(CARRY4(uVar6,*puVar11) || CARRY4(uVar6 + *puVar11,uVar7));
    puVar11 = (uint *)(ulonglong)uVar7;
    bVar16 = (int)uVar7 < 0;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
code_r0x0001404aec71:
    if (!bVar16) goto code_r0x0001404aec86;
    *(byte *)((longlong)puVar11 + -0x15) = *(byte *)((longlong)puVar11 + -0x15) + unaff_BH;
  }
  param_1[unaff_RDI * 2 + -0x1487ffed] = param_1[unaff_RDI * 2 + -0x1487ffed] + unaff_BL;
  *param_1 = *param_1 + (char)register0x00000020;
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
  pbVar1 = (byte *)(unaff_RDI + 0x79);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  uVar10 = (uint)CARRY1(bVar3,bVar12);
  uVar7 = *puVar11;
  uVar8 = (uint)puVar11;
  uVar5 = *puVar11;
  uVar9 = uVar8 + *puVar11;
  uVar6 = uVar9 + uVar10;
  puVar11 = (uint *)(ulonglong)uVar6;
  puVar15 = (undefined1 *)((longlong)register0x00000020 + -8);
  *(ulonglong *)((longlong)register0x00000020 + -8) =
       (ulonglong)(in_NT & 1) * 0x4000 |
       (ulonglong)(SCARRY4(uVar8,uVar5) != SCARRY4(uVar9,uVar10)) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((int)uVar6 < 0) * 0x80 | (ulonglong)(uVar6 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(uVar6 & 0xff) & 1U) == 0) * 4 |
       (ulonglong)(CARRY4(uVar8,uVar7) || CARRY4(uVar9,uVar10)) | (ulonglong)(in_ID & 1) * 0x200000
       | (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  if ((int)uVar6 >= 0) {
    uVar7 = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 | (byte)*puVar11);
    puVar11 = (uint *)(ulonglong)uVar7;
    *(byte *)((longlong)puVar11 + (longlong)param_1) =
         *(byte *)((longlong)puVar11 + (longlong)param_1) + bVar14;
    bVar3 = (byte)(uVar6 >> 8);
    bVar16 = CARRY1((byte)*puVar11,bVar3);
    *(byte *)puVar11 = (byte)*puVar11 + bVar3;
    if ((char)(byte)*puVar11 < '\0') {
      pbVar1 = (byte *)(unaff_RDI + 0x79);
      bVar3 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar12;
      uVar10 = *puVar11;
      uVar5 = *puVar11;
      uVar9 = uVar7 + uVar5 + (uint)CARRY1(bVar3,bVar12);
      puVar15 = (undefined1 *)((longlong)register0x00000020 + -0x10);
      *(ulonglong *)((longlong)register0x00000020 + -0x10) = (ulonglong)uVar9;
      uVar7 = uVar9 + 0x21004a +
              (uint)(CARRY4(uVar7,uVar10) || CARRY4(uVar7 + uVar5,(uint)CARRY1(bVar3,bVar12)));
      puVar11 = (uint *)(ulonglong)uVar7;
      *(byte *)puVar11 = (byte)*puVar11 + (char)uVar7;
      param_1[0x13] = param_1[0x13] & unaff_BH;
      pbVar1 = (byte *)(unaff_RDI + 0x79);
      bVar16 = CARRY1(*pbVar1,bVar12);
      *pbVar1 = *pbVar1 + bVar12;
    }
    uVar7 = *puVar11;
    uVar5 = (uint)puVar11 + *puVar11;
    uVar10 = uVar5 + bVar16;
    *(ulonglong *)(puVar15 + -8) = (ulonglong)uVar10;
    uVar7 = uVar10 + 0x3021004a + (uint)(CARRY4((uint)puVar11,uVar7) || CARRY4(uVar5,(uint)bVar16));
    *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)((longlong)puVar11 + -0x15) = *(byte *)((longlong)puVar11 + -0x15) + unaff_BH;
  register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
code_r0x0001404aec86:
  *param_1 = *param_1 + (char)register0x00000020;
  *(byte *)puVar11 = (byte)*puVar11 + bVar12;
  *(byte *)puVar11 = (byte)*puVar11 + (char)puVar11;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

