// Function: FUN_1404ad0fc
// Addr: 1404ad0fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad0fe) overlaps instruction at (ram,0x0001404ad0fd)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad166) */
/* WARNING: Removing unreachable block (ram,0x0001404ad0ef) */

void FUN_1404ad0fc(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint3 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar10;
  int *piVar6;
  byte *pbVar7;
  char *pcVar8;
  longlong in_RAX;
  uint *puVar9;
  undefined7 uVar11;
  byte bVar12;
  byte *pbVar13;
  undefined7 uVar14;
  byte *pbVar15;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *unaff_RDI;
  bool bVar19;
  bool in_ZF;
  undefined8 uStack_18;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  
  puVar16 = auStack_8;
  if (!in_ZF) {
    *(char *)(in_RAX + 100) = *(char *)(in_RAX + 100) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar15 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),0xf);
  bRam00000001617adcd1 = bRam00000001617adcd1 >> 1 | bRam00000001617adcd1 << 7;
  uVar5 = (int)in_RAX + 0x54050002;
  pbVar7 = (byte *)(ulonglong)uVar5;
  *pbVar7 = *pbVar7 | (byte)uVar5;
  pbVar13 = (byte *)(param_1 + -1);
  uVar1 = (uint3)(uVar5 >> 8);
  bVar3 = (byte)(uVar5 >> 8);
  if (pbVar13 == (byte *)0x0 || *pbVar7 == 0) {
    *(uint *)pbVar7 = *(int *)pbVar7 + uVar5;
    *pbVar13 = *pbVar13 + bVar3;
    *(char *)CONCAT71((uint7)uVar1,0x4a) = *(char *)CONCAT71((uint7)uVar1,0x4a) + 'J';
    *(uint *)pbVar13 = *(int *)pbVar13 + 0x1182be00 + (uint)(0xb5 < bVar3);
    cVar10 = bVar3 + (char)((ulonglong)pbVar13 >> 8);
    puVar9 = (uint *)CONCAT71((uint7)CONCAT21((short)(uVar5 >> 0x10),cVar10),0x4a);
    *pbVar13 = *pbVar13 + cVar10;
    *pbVar15 = *pbVar15 + 0x4a;
    *(byte *)puVar9 = (byte)*puVar9 + 0x4a;
    puVar16 = auStack_10;
    bVar19 = false;
    *(byte *)puVar9 = (byte)*puVar9 | 0x4a;
    pbVar13 = (byte *)(param_1 + -2);
    puVar17 = auStack_10;
    if (pbVar13 == (byte *)0x0 || (byte)*puVar9 == 0) {
      do {
        *puVar9 = *puVar9 + (int)puVar9 + (uint)bVar19;
        uVar11 = (undefined7)((ulonglong)puVar9 >> 8);
        pbVar7 = (byte *)CONCAT71(uVar11,0x4a);
        bVar3 = *pbVar13;
        *pbVar13 = *pbVar13 + 0x4a;
        uVar14 = (undefined7)((ulonglong)pbVar13 >> 8);
        bVar12 = (char)pbVar13 + *pbVar7 + (0xb5 < bVar3);
        cVar10 = (char)pbVar15;
        *pbVar15 = *pbVar15 + cVar10;
        puVar18 = puVar17 + -8;
        *(undefined1 **)(puVar17 + -8) = puVar17;
        bVar3 = *pbVar7;
        bVar4 = bVar3 | 0x4a;
        puVar9 = (uint *)(CONCAT71(uVar11,bVar3) | 0x4a);
        pbVar15 = (byte *)CONCAT62((int6)((ulonglong)pbVar15 >> 0x10),
                                   CONCAT11((char)((ulonglong)pbVar15 >> 8) +
                                            *(char *)(CONCAT71(uVar14,bVar12) * 2),cVar10));
        *pbVar15 = *pbVar15 + cVar10;
        bVar12 = bVar12 ^ bRam00000000ec001182;
        pbVar13 = (byte *)(CONCAT71(uVar14,bVar12) + -1);
        if (pbVar13 == (byte *)0x0 || bVar12 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar7 = (byte *)((longlong)puVar9 + -0x7b);
        bVar3 = *pbVar7;
        *pbVar7 = *pbVar7 + unaff_BH;
        uVar5 = *puVar9 + (uint)puVar9;
        bVar19 = CARRY4(*puVar9,(uint)puVar9) || CARRY4(uVar5,(uint)CARRY1(bVar3,unaff_BH));
        *puVar9 = uVar5 + CARRY1(bVar3,unaff_BH);
        puVar17 = puVar17 + -8;
      } while ((int)*puVar9 < 0);
      *pbVar13 = *pbVar13 + (char)puVar18;
      *(byte *)puVar9 = (byte)*puVar9 + bVar4;
      *(byte *)(puVar9 + 0x1e000461) = (byte)puVar9[0x1e000461] + cVar10;
      *(byte *)(puVar9 + -0xc) = (byte)puVar9[-0xc] + unaff_BH;
      *pbVar13 = *pbVar13 + (char)puVar18;
      *pbVar15 = *pbVar15 + bVar4;
      *(byte *)puVar9 = (byte)*puVar9 + bVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    cVar10 = (char)auStack_8;
    if ((byte)(unaff_BH + unaff_BL) == '\0') {
      bRam0000000000000000 = bRam0000000000000000 | (byte)uVar5;
      *pbVar7 = *pbVar7 + (char)pbVar13;
      uVar2 = in(0x11);
      piVar6 = (int *)((ulonglong)CONCAT31(uVar1,uVar2) | 0x6c);
      *piVar6 = *piVar6 + (int)piVar6;
      *pbVar13 = *pbVar13 + cVar10;
      *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
      piVar6 = (int *)((ulonglong)CONCAT31(uVar1,(char)piVar6) | 0x6c);
      *piVar6 = *piVar6 + (int)piVar6;
      *pbVar13 = *pbVar13 + cVar10;
      *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
      pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,(char)piVar6 + unaff_BL);
      unaff_RDI[(longlong)pbVar13 * 8 + 0x4a] = unaff_RDI[(longlong)pbVar13 * 8 + 0x4a];
      *pbVar13 = *pbVar13 + bVar3;
    }
    *pbVar13 = *pbVar13 + cVar10;
    *pbVar7 = *pbVar7 + (char)pbVar7;
    pbVar15 = (byte *)0x0;
    pbVar7[-0x1c] = pbVar7[-0x1c];
    *param_4 = *param_4 + (char)pbVar7;
    bRam0000000000000000 = bRam0000000000000000 + (char)pbVar13;
    puVar9 = (uint *)(ulonglong)(((uint)pbVar7 | 5) + 0x3600470);
  }
  bVar3 = (byte)puVar9;
  *pbVar15 = *pbVar15 ^ bVar3;
  *(uint **)(puVar16 + -8) = puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar3;
  *(int *)(pbVar13 + 0x12) = *(int *)(pbVar13 + 0x12) + (int)puVar9;
  pbVar13[-0x68] = pbVar13[-0x68] + bVar3;
  pcVar8 = (char *)(ulonglong)((int)puVar9 + 0x6883400);
  cVar10 = (char)((ulonglong)pbVar13 >> 8);
  *unaff_RDI = *unaff_RDI + cVar10;
  if (-1 < *unaff_RDI) {
    *pcVar8 = *pcVar8 + cVar10;
    *(undefined8 *)(puVar16 + -0x10) = 0x11e0008;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

