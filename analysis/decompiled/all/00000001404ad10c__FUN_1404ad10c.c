// Function: FUN_1404ad10c
// Addr: 1404ad10c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad167) overlaps instruction at (ram,0x0001404ad166)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad166) */
/* WARNING: Removing unreachable block (ram,0x0001404ad0ef) */

void FUN_1404ad10c(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  uint3 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  char cVar10;
  int *piVar6;
  byte *pbVar7;
  char *pcVar8;
  uint *puVar9;
  undefined7 uVar11;
  byte bVar12;
  byte *pbVar13;
  undefined7 uVar14;
  char cVar15;
  char unaff_BL;
  byte unaff_BH;
  undefined1 *puVar16;
  undefined1 *puVar17;
  char *unaff_RDI;
  bool bVar18;
  undefined8 uStack_10;
  
  uVar5 = (in_EAX | 0x21300bc0) + 0x54050002;
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
    *param_2 = *param_2 + 0x4a;
    *(byte *)puVar9 = (byte)*puVar9 + 0x4a;
    bVar18 = false;
    *(byte *)puVar9 = (byte)*puVar9 | 0x4a;
    pbVar13 = (byte *)(param_1 + -2);
    puVar16 = &stack0xfffffffffffffff8;
    puVar17 = (undefined1 *)register0x00000020;
    if (pbVar13 == (byte *)0x0 || (byte)*puVar9 == 0) {
      do {
        *puVar9 = *puVar9 + (int)puVar9 + (uint)bVar18;
        uVar11 = (undefined7)((ulonglong)puVar9 >> 8);
        pbVar7 = (byte *)CONCAT71(uVar11,0x4a);
        bVar3 = *pbVar13;
        *pbVar13 = *pbVar13 + 0x4a;
        uVar14 = (undefined7)((ulonglong)pbVar13 >> 8);
        bVar12 = (char)pbVar13 + *pbVar7 + (0xb5 < bVar3);
        cVar15 = (char)param_2;
        *param_2 = *param_2 + cVar15;
        cVar10 = (char)puVar17;
        *(undefined1 **)(puVar17 + -0x10) = puVar17 + -8;
        bVar3 = *pbVar7;
        bVar4 = bVar3 | 0x4a;
        puVar9 = (uint *)(CONCAT71(uVar11,bVar3) | 0x4a);
        param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                                   CONCAT11((char)((ulonglong)param_2 >> 8) +
                                            *(char *)(CONCAT71(uVar14,bVar12) * 2),cVar15));
        *param_2 = *param_2 + cVar15;
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
        bVar18 = CARRY4(*puVar9,(uint)puVar9) || CARRY4(uVar5,(uint)CARRY1(bVar3,unaff_BH));
        *puVar9 = uVar5 + CARRY1(bVar3,unaff_BH);
        puVar17 = puVar17 + -8;
      } while ((int)*puVar9 < 0);
      *pbVar13 = *pbVar13 + cVar10 + -0x10;
      *(byte *)puVar9 = (byte)*puVar9 + bVar4;
      *(byte *)(puVar9 + 0x1e000461) = (byte)puVar9[0x1e000461] + cVar15;
      *(byte *)(puVar9 + -0xc) = (byte)puVar9[-0xc] + unaff_BH;
      *pbVar13 = *pbVar13 + cVar10 + -0x10;
      *param_2 = *param_2 + bVar4;
      *(byte *)puVar9 = (byte)*puVar9 + bVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    if ((byte)(unaff_BH + unaff_BL) == '\0') {
      bRam0000000000000000 = bRam0000000000000000 | (byte)uVar5;
      *pbVar7 = *pbVar7 + (char)pbVar13;
      uVar2 = in(0x11);
      piVar6 = (int *)((ulonglong)CONCAT31(uVar1,uVar2) | 0x6c);
      *piVar6 = *piVar6 + (int)piVar6;
      *pbVar13 = *pbVar13;
      *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
      piVar6 = (int *)((ulonglong)CONCAT31(uVar1,(char)piVar6) | 0x6c);
      *piVar6 = *piVar6 + (int)piVar6;
      *pbVar13 = *pbVar13;
      *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
      pbVar7 = (byte *)(ulonglong)CONCAT31(uVar1,(char)piVar6 + unaff_BL);
      unaff_RDI[(longlong)pbVar13 * 8 + 0x4a] = unaff_RDI[(longlong)pbVar13 * 8 + 0x4a];
      *pbVar13 = *pbVar13 + bVar3;
    }
    *pbVar13 = *pbVar13;
    *pbVar7 = *pbVar7 + (char)pbVar7;
    param_2 = (byte *)0x0;
    pbVar7[-0x1c] = pbVar7[-0x1c];
    *param_4 = *param_4 + (char)pbVar7;
    bRam0000000000000000 = bRam0000000000000000 + (char)pbVar13;
    puVar9 = (uint *)(ulonglong)(((uint)pbVar7 | 5) + 0x3600470);
    puVar16 = (undefined1 *)register0x00000020;
  }
  bVar3 = (byte)puVar9;
  *param_2 = *param_2 ^ bVar3;
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

