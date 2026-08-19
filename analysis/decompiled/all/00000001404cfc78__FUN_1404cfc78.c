// Function: FUN_1404cfc78
// Addr: 1404cfc78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfc78(byte *param_1,ulonglong param_2,byte param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar13;
  byte *in_RAX;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  uint *puVar12;
  byte *pbVar14;
  byte bVar15;
  char cVar17;
  byte bVar18;
  longlong lVar16;
  uint *unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  
  while( true ) {
    cVar4 = (char)((ulonglong)in_RAX >> 8) * '\x02';
    pcVar9 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,(char)in_RAX));
    *pcVar9 = *pcVar9 + (char)in_RAX;
    cVar17 = (char)(param_2 >> 8);
    pcVar9[unaff_RBP] = pcVar9[unaff_RBP] + cVar17;
    *(char *)((longlong)register0x00000020 + (longlong)pcVar9) =
         *(char *)((longlong)register0x00000020 + (longlong)pcVar9) + cVar4;
    pcVar9[param_2] = pcVar9[param_2] + cVar17;
    pcVar9[-0x5affc36e] = pcVar9[-0x5affc36e] + (char)param_2;
    *unaff_RDI = *unaff_RSI;
    *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404cfc96;
    pcVar9 = (char *)func_0x0001456dfcdf();
    uVar5 = (int)CONCAT71((int7)((ulonglong)pcVar9 >> 8),(char)pcVar9 + *pcVar9) + 0xe0000354;
    uVar6 = in((short)uVar5);
    piVar10 = (int *)(ulonglong)uVar5;
    pcVar9 = (char *)(ulonglong)uVar6;
    unaff_RDI[1] = unaff_RSI[1];
    *param_1 = *param_1 + unaff_R12B;
    *pcVar9 = *pcVar9 + (char)uVar5;
    *(char *)piVar10 = (char)*piVar10 + (char)uVar5;
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    uVar5 = uVar5 + *piVar10;
    pbVar11 = (byte *)(ulonglong)uVar5;
    pbVar14 = param_1 + -1;
    if (pbVar14 == (byte *)0x0 || uVar5 == 0) break;
    *unaff_RBX = *unaff_RBX & uVar6;
    bVar3 = (byte)uVar5;
    *pbVar11 = *pbVar11 | bVar3;
    register0x00000020 =
         (BADSPACEBASE *)
         (ulonglong)(uint)((int)(undefined1 *)((longlong)register0x00000020 + -8) * 2);
    *pbVar11 = *pbVar11 + bVar3;
    cRam00000000d04cfe8d = cRam00000000d04cfe8d + bVar3;
    *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 2);
    param_2 = (ulonglong)uVar6;
    unaff_RDI[6] = unaff_RSI[6];
    *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404cfc66;
    pcVar9 = (char *)func_0x0001406dfcaf();
    *pcVar9 = *pcVar9 + (char)pcVar9;
    puVar2 = unaff_RDI + 0xb;
    puVar1 = unaff_RSI + 0xb;
    *(undefined4 *)(unaff_RDI + 7) = *(undefined4 *)(unaff_RSI + 7);
    param_2 = param_2 & 0xffffffff;
    unaff_RDI = unaff_RDI + 0xc;
    unaff_RSI = unaff_RSI + 0xc;
    *puVar2 = *puVar1;
    *(undefined **)((longlong)register0x00000020 + -8) = &UNK_1404cfc76;
    in_RAX = (byte *)func_0x0001406dfcbf();
    *in_RAX = *in_RAX | (byte)in_RAX;
    param_1 = pbVar14;
  }
  in((short)uVar6);
  unaff_RDI[2] = unaff_RSI[2];
  *pbVar14 = *pbVar14 + unaff_R12B;
  *pcVar9 = *pcVar9 + (char)uVar6;
  bVar13 = (byte)(uVar6 >> 8);
  cVar4 = (char)uVar6 + bVar13;
  uVar5 = CONCAT31((int3)(uVar6 >> 8),cVar4);
  uVar7 = in((short)uVar5);
  unaff_RDI[3] = unaff_RSI[3];
  bVar3 = *pbVar14;
  *pbVar14 = *pbVar14 + param_3;
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + (int)pbVar14 + (uint)CARRY1(bVar3,param_3);
  bVar15 = (byte)uVar7;
  *pbVar14 = *pbVar14 + bVar15;
  bVar3 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar15;
  lVar16 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),0xd);
  param_1 = param_1 + -2;
  if (param_1 == (byte *)0x0 || *pbVar14 == 0) {
    *param_1 = *param_1 >> 1 | *param_1 << 7;
    unaff_RDI[4] = unaff_RDI[4];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar18 = (byte)((uint)uVar7 >> 8);
  piVar10 = (int *)((ulonglong)
                    CONCAT22((short)(uVar6 >> 0x10),
                             CONCAT11(bVar13 + bVar18 + CARRY1(bVar3,bVar15),cVar4)) ^ 0x14);
  iVar8 = (int)piVar10 + *piVar10 +
          (uint)(CARRY1(bVar13,bVar18) || CARRY1(bVar13 + bVar18,CARRY1(bVar3,bVar15)));
  pbVar11 = (byte *)(lVar16 * 2);
  *pbVar11 = *pbVar11 | bVar18;
  cVar4 = cRamfc00402341004022;
  uVar6 = CONCAT31((int3)((uint)iVar8 >> 8),cRamfc00402341004022);
  puVar12 = (uint *)(ulonglong)uVar6;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)puVar12 = (char)*puVar12 + cVar4;
  *(char *)((longlong)puVar12 + 0x41004022) =
       *(char *)((longlong)puVar12 + 0x41004022) + (char)((uint)iVar8 >> 8);
  uVar6 = uVar6 & *puVar12;
  *param_1 = *param_1 + unaff_R12B;
  pcVar9 = (char *)((ulonglong)uVar6 * 2);
  *pcVar9 = *pcVar9 + (char)uVar6;
  pcVar9 = (char *)(lVar16 * 2);
  *pcVar9 = *pcVar9 + bVar18;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

