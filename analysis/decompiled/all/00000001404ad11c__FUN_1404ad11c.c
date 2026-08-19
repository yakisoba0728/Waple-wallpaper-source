// Function: FUN_1404ad11c
// Addr: 1404ad11c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad167) overlaps instruction at (ram,0x0001404ad166)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad166) */
/* WARNING: Removing unreachable block (ram,0x0001404ad0ef) */

void FUN_1404ad11c(int *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar6;
  undefined8 in_RAX;
  char *pcVar3;
  char cVar7;
  uint *puVar4;
  byte *pbVar5;
  byte bVar9;
  byte *pbVar10;
  undefined7 uVar11;
  byte unaff_BH;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *unaff_RDI;
  bool bVar14;
  undefined8 uStack_10;
  undefined7 uVar8;
  
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x4a);
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  *(byte *)param_1 = (char)*param_1 + bVar6;
  *pcVar3 = *pcVar3 + 'J';
  *param_1 = *param_1 + 0x1182be00 + (uint)(0xb5 < bVar6);
  cVar7 = bVar6 + (char)((ulonglong)param_1 >> 8);
  puVar4 = (uint *)CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),cVar7),0x4a);
  *(char *)param_1 = (char)*param_1 + cVar7;
  *param_2 = *param_2 + 0x4a;
  *(byte *)puVar4 = (byte)*puVar4 + 0x4a;
  bVar14 = false;
  *(byte *)puVar4 = (byte)*puVar4 | 0x4a;
  pbVar10 = (byte *)((longlong)param_1 + -1);
  puVar12 = &stack0xfffffffffffffff8;
  if (pbVar10 != (byte *)0x0 && (byte)*puVar4 != 0) {
    *param_2 = *param_2 ^ 0x4a;
    *(byte *)puVar4 = (byte)*puVar4 + 0x4a;
    *(int *)((longlong)param_1 + 0x11) = *(int *)((longlong)param_1 + 0x11) + (int)puVar4;
    *(char *)((longlong)param_1 + -0x69) = *(char *)((longlong)param_1 + -0x69) + 'J';
    pcVar3 = (char *)(ulonglong)((int)puVar4 + 0x6883400);
    cVar7 = (char)((ulonglong)pbVar10 >> 8);
    *unaff_RDI = *unaff_RDI + cVar7;
    if (-1 < *unaff_RDI) {
      *pcVar3 = *pcVar3 + cVar7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    *puVar4 = *puVar4 + (int)puVar4 + (uint)bVar14;
    uVar8 = (undefined7)((ulonglong)puVar4 >> 8);
    pbVar5 = (byte *)CONCAT71(uVar8,0x4a);
    bVar6 = *pbVar10;
    *pbVar10 = *pbVar10 + 0x4a;
    uVar11 = (undefined7)((ulonglong)pbVar10 >> 8);
    bVar9 = (char)pbVar10 + *pbVar5 + (0xb5 < bVar6);
    cVar7 = (char)param_2;
    *param_2 = *param_2 + cVar7;
    puVar13 = puVar12 + -8;
    *(undefined1 **)(puVar12 + -8) = puVar12;
    bVar6 = *pbVar5;
    bVar2 = bVar6 | 0x4a;
    puVar4 = (uint *)(CONCAT71(uVar8,bVar6) | 0x4a);
    param_2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((char)((ulonglong)param_2 >> 8) +
                                        *(char *)(CONCAT71(uVar11,bVar9) * 2),cVar7));
    *param_2 = *param_2 + cVar7;
    bVar9 = bVar9 ^ bRam00000000ec001182;
    pbVar10 = (byte *)(CONCAT71(uVar11,bVar9) + -1);
    if (pbVar10 == (byte *)0x0 || bVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar5 = (byte *)((longlong)puVar4 + -0x7b);
    bVar6 = *pbVar5;
    *pbVar5 = *pbVar5 + unaff_BH;
    uVar1 = *puVar4 + (uint)puVar4;
    bVar14 = CARRY4(*puVar4,(uint)puVar4) || CARRY4(uVar1,(uint)CARRY1(bVar6,unaff_BH));
    *puVar4 = uVar1 + CARRY1(bVar6,unaff_BH);
    puVar12 = puVar12 + -8;
  } while ((int)*puVar4 < 0);
  *pbVar10 = *pbVar10 + (char)puVar13;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  *(byte *)(puVar4 + 0x1e000461) = (byte)puVar4[0x1e000461] + cVar7;
  *(byte *)(puVar4 + -0xc) = (byte)puVar4[-0xc] + unaff_BH;
  *pbVar10 = *pbVar10 + (char)puVar13;
  *param_2 = *param_2 + bVar2;
  *(byte *)puVar4 = (byte)*puVar4 + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

