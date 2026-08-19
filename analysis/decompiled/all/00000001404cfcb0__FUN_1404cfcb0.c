// Function: FUN_1404cfcb0
// Addr: 1404cfcb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfcb0(byte *param_1,char *param_2,byte param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar13;
  char *pcVar9;
  byte *pbVar10;
  byte *in_RAX;
  uint *puVar12;
  byte *pbVar14;
  byte bVar15;
  char cVar18;
  byte bVar19;
  ulonglong uVar16;
  longlong lVar17;
  uint *unaff_RBX;
  ulonglong uVar20;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  char in_ZF;
  int *piVar11;
  
  while( true ) {
    pbVar14 = param_1 + -1;
    if (pbVar14 == (byte *)0x0 || in_ZF != '\0') break;
    *unaff_RBX = *unaff_RBX & (uint)param_2;
    bVar3 = (byte)in_RAX;
    *in_RAX = *in_RAX | bVar3;
    uVar20 = (ulonglong)(uint)((int)register0x00000020 * 2);
    *in_RAX = *in_RAX + bVar3;
    cRam00000000d04cfe8d = cRam00000000d04cfe8d + bVar3;
    *unaff_RDI = *unaff_RSI;
    uVar16 = (ulonglong)param_2 & 0xffffffff;
    *(undefined1 *)(unaff_RDI + 1) = *(undefined1 *)(unaff_RSI + 1);
    *(undefined **)(uVar20 - 8) = &UNK_1404cfc66;
    pcVar9 = (char *)func_0x0001406dfcaf();
    *pcVar9 = *pcVar9 + (char)pcVar9;
    *(undefined4 *)((longlong)unaff_RDI + 5) = *(undefined4 *)((longlong)unaff_RSI + 5);
    uVar16 = uVar16 & 0xffffffff;
    *(undefined1 *)((longlong)unaff_RDI + 9) = *(undefined1 *)((longlong)unaff_RSI + 9);
    *(undefined **)(uVar20 - 8) = &UNK_1404cfc76;
    pbVar10 = (byte *)func_0x0001406dfcbf();
    bVar3 = (byte)pbVar10;
    *pbVar10 = *pbVar10 | bVar3;
    cVar4 = (char)((ulonglong)pbVar10 >> 8) * '\x02';
    pcVar9 = (char *)CONCAT62((int6)((ulonglong)pbVar10 >> 0x10),CONCAT11(cVar4,bVar3));
    *pcVar9 = *pcVar9 + bVar3;
    cVar18 = (char)(uVar16 >> 8);
    pcVar9[unaff_RBP] = pcVar9[unaff_RBP] + cVar18;
    pcVar9[uVar20] = pcVar9[uVar20] + cVar4;
    pcVar9[uVar16] = pcVar9[uVar16] + cVar18;
    pcVar9[-0x5affc36e] = pcVar9[-0x5affc36e] + (char)uVar16;
    puVar2 = (undefined1 *)((longlong)unaff_RDI + 0xb);
    puVar1 = (undefined1 *)((longlong)unaff_RSI + 0xb);
    *(undefined1 *)((longlong)unaff_RDI + 10) = *(undefined1 *)((longlong)unaff_RSI + 10);
    *(undefined **)(uVar20 - 8) = &UNK_1404cfc96;
    pcVar9 = (char *)func_0x0001456dfcdf();
    uVar8 = (int)CONCAT71((int7)((ulonglong)pcVar9 >> 8),(char)pcVar9 + *pcVar9) + 0xe0000354;
    uVar5 = in((short)uVar8);
    piVar11 = (int *)(ulonglong)uVar8;
    param_2 = (char *)(ulonglong)uVar5;
    unaff_RDI = unaff_RDI + 3;
    unaff_RSI = unaff_RSI + 3;
    *puVar2 = *puVar1;
    *pbVar14 = *pbVar14 + unaff_R12B;
    *param_2 = *param_2 + (char)uVar8;
    *(char *)piVar11 = (char)*piVar11 + (char)uVar8;
    register0x00000020 = (BADSPACEBASE *)(uVar20 - 8);
    *(ulonglong *)(uVar20 - 8) = uVar20;
    in_RAX = (byte *)(ulonglong)(uVar8 + *piVar11);
    in_ZF = uVar8 + *piVar11 == 0;
    param_1 = pbVar14;
  }
  in((short)param_2);
  param_2 = (char *)((ulonglong)param_2 & 0xffffffff);
  *(undefined1 *)unaff_RDI = *(undefined1 *)unaff_RSI;
  *pbVar14 = *pbVar14 + unaff_R12B;
  *param_2 = *param_2 + (char)param_2;
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_2 + bVar13;
  piVar11 = (int *)CONCAT71((int7)((ulonglong)param_2 >> 8),cVar4);
  uVar6 = in((short)piVar11);
  *(undefined1 *)((longlong)unaff_RDI + 1) = *(undefined1 *)((longlong)unaff_RSI + 1);
  bVar3 = *pbVar14;
  *pbVar14 = *pbVar14 + param_3;
  *piVar11 = *piVar11 + (int)pbVar14 + (uint)CARRY1(bVar3,param_3);
  bVar15 = (byte)uVar6;
  *pbVar14 = *pbVar14 + bVar15;
  bVar3 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar15;
  lVar17 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),0xd);
  param_1 = param_1 + -2;
  if (param_1 == (byte *)0x0 || *pbVar14 == 0) {
    *param_1 = *param_1 >> 1 | *param_1 << 7;
    *(undefined1 *)((longlong)unaff_RDI + 2) = *(undefined1 *)((longlong)unaff_RDI + 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar19 = (byte)((uint)uVar6 >> 8);
  piVar11 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11(bVar13 + bVar19 + CARRY1(bVar3,bVar15),cVar4)) ^ 0x14);
  iVar7 = (int)piVar11 + *piVar11 +
          (uint)(CARRY1(bVar13,bVar19) || CARRY1(bVar13 + bVar19,CARRY1(bVar3,bVar15)));
  pbVar14 = (byte *)(lVar17 * 2);
  *pbVar14 = *pbVar14 | bVar19;
  cVar4 = cRamfc00402341004022;
  uVar8 = CONCAT31((int3)((uint)iVar7 >> 8),cRamfc00402341004022);
  puVar12 = (uint *)(ulonglong)uVar8;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)puVar12 = (char)*puVar12 + cVar4;
  *(char *)((longlong)puVar12 + 0x41004022) =
       *(char *)((longlong)puVar12 + 0x41004022) + (char)((uint)iVar7 >> 8);
  uVar8 = uVar8 & *puVar12;
  *param_1 = *param_1 + unaff_R12B;
  pcVar9 = (char *)((ulonglong)uVar8 * 2);
  *pcVar9 = *pcVar9 + (char)uVar8;
  pcVar9 = (char *)(lVar17 * 2);
  *pcVar9 = *pcVar9 + bVar19;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

