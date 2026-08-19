// Function: FUN_1404cfc38
// Addr: 1404cfc38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfc38(byte *param_1,char *param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar11;
  undefined8 in_RAX;
  char *pcVar7;
  byte *pbVar8;
  int *piVar9;
  uint *puVar10;
  byte *pbVar12;
  byte bVar13;
  char cVar16;
  byte bVar17;
  ulonglong uVar14;
  longlong lVar15;
  uint *unaff_RBX;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar20;
  undefined4 *puVar21;
  char unaff_R12B;
  undefined4 *unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  puVar18 = auStackX_8;
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam00c40203bd002206);
  do {
    puVar21 = unaff_retaddr;
    puVar20 = unaff_RSI;
    pbVar12 = param_1;
    *unaff_RBX = *unaff_RBX & (uint)param_2;
    bVar1 = (byte)pbVar8;
    *pbVar8 = *pbVar8 | bVar1;
    uVar19 = (ulonglong)(uint)((int)puVar18 * 2);
    *pbVar8 = *pbVar8 + bVar1;
    cRam00000000d04cfe8d = cRam00000000d04cfe8d + bVar1;
    *puVar21 = *puVar20;
    uVar14 = (ulonglong)param_2 & 0xffffffff;
    *(undefined1 *)(puVar21 + 1) = *(undefined1 *)(puVar20 + 1);
    *(undefined **)(uVar19 - 8) = &UNK_1404cfc66;
    pcVar7 = (char *)func_0x0001406dfcaf();
    *pcVar7 = *pcVar7 + (char)pcVar7;
    *(undefined4 *)((longlong)puVar21 + 5) = *(undefined4 *)((longlong)puVar20 + 5);
    uVar14 = uVar14 & 0xffffffff;
    *(undefined1 *)((longlong)puVar21 + 9) = *(undefined1 *)((longlong)puVar20 + 9);
    *(undefined **)(uVar19 - 8) = &UNK_1404cfc76;
    pbVar8 = (byte *)func_0x0001406dfcbf();
    bVar1 = (byte)pbVar8;
    *pbVar8 = *pbVar8 | bVar1;
    cVar2 = (char)((ulonglong)pbVar8 >> 8) * '\x02';
    pcVar7 = (char *)CONCAT62((int6)((ulonglong)pbVar8 >> 0x10),CONCAT11(cVar2,bVar1));
    *pcVar7 = *pcVar7 + bVar1;
    cVar16 = (char)(uVar14 >> 8);
    pcVar7[unaff_RBP] = pcVar7[unaff_RBP] + cVar16;
    pcVar7[uVar19] = pcVar7[uVar19] + cVar2;
    pcVar7[uVar14] = pcVar7[uVar14] + cVar16;
    pcVar7[-0x5affc36e] = pcVar7[-0x5affc36e] + (char)uVar14;
    *(undefined1 *)((longlong)puVar21 + 10) = *(undefined1 *)((longlong)puVar20 + 10);
    *(undefined **)(uVar19 - 8) = &UNK_1404cfc96;
    pcVar7 = (char *)func_0x0001456dfcdf();
    uVar3 = (int)CONCAT71((int7)((ulonglong)pcVar7 >> 8),(char)pcVar7 + *pcVar7) + 0xe0000354;
    uVar4 = in((short)uVar3);
    piVar9 = (int *)(ulonglong)uVar3;
    param_2 = (char *)(ulonglong)uVar4;
    *(undefined1 *)((longlong)puVar21 + 0xb) = *(undefined1 *)((longlong)puVar20 + 0xb);
    *pbVar12 = *pbVar12 + unaff_R12B;
    *param_2 = *param_2 + (char)uVar3;
    *(char *)piVar9 = (char)*piVar9 + (char)uVar3;
    puVar18 = (undefined1 *)(uVar19 - 8);
    *(ulonglong *)(uVar19 - 8) = uVar19;
    pbVar8 = (byte *)(ulonglong)(uVar3 + *piVar9);
    param_1 = pbVar12 + -1;
    unaff_RSI = puVar20 + 3;
    unaff_retaddr = puVar21 + 3;
  } while (param_1 != (byte *)0x0 && uVar3 + *piVar9 != 0);
  in((short)uVar4);
  *(undefined1 *)(puVar21 + 3) = *(undefined1 *)(puVar20 + 3);
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)uVar4;
  bVar11 = (byte)(uVar4 >> 8);
  cVar2 = (char)uVar4 + bVar11;
  uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  uVar5 = in((short)uVar3);
  *(undefined1 *)((longlong)puVar21 + 0xd) = *(undefined1 *)((longlong)puVar20 + 0xd);
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + (int)param_1 + (uint)CARRY1(bVar1,param_3);
  bVar13 = (byte)uVar5;
  *param_1 = *param_1 + bVar13;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar13;
  lVar15 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),0xd);
  pbVar12 = pbVar12 + -2;
  if (pbVar12 == (byte *)0x0 || *param_1 == 0) {
    *pbVar12 = *pbVar12 >> 1 | *pbVar12 << 7;
    *(undefined1 *)((longlong)puVar21 + 0xe) = *(undefined1 *)((longlong)puVar21 + 0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar17 = (byte)((uint)uVar5 >> 8);
  piVar9 = (int *)((ulonglong)
                   CONCAT22((short)(uVar4 >> 0x10),
                            CONCAT11(bVar11 + bVar17 + CARRY1(bVar1,bVar13),cVar2)) ^ 0x14);
  iVar6 = (int)piVar9 + *piVar9 +
          (uint)(CARRY1(bVar11,bVar17) || CARRY1(bVar11 + bVar17,CARRY1(bVar1,bVar13)));
  pbVar8 = (byte *)(lVar15 * 2);
  *pbVar8 = *pbVar8 | bVar17;
  cVar2 = cRamfc00402341004022;
  uVar3 = CONCAT31((int3)((uint)iVar6 >> 8),cRamfc00402341004022);
  puVar10 = (uint *)(ulonglong)uVar3;
  *pbVar12 = *pbVar12 + unaff_R12B;
  *(char *)puVar10 = (char)*puVar10 + cVar2;
  *(char *)((longlong)puVar10 + 0x41004022) =
       *(char *)((longlong)puVar10 + 0x41004022) + (char)((uint)iVar6 >> 8);
  uVar3 = uVar3 & *puVar10;
  *pbVar12 = *pbVar12 + unaff_R12B;
  pcVar7 = (char *)((ulonglong)uVar3 * 2);
  *pcVar7 = *pcVar7 + (char)uVar3;
  pcVar7 = (char *)(lVar15 * 2);
  *pcVar7 = *pcVar7 + bVar17;
  *pbVar12 = *pbVar12 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

