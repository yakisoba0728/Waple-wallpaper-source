// Function: FUN_1404ae2d8
// Addr: 1404ae2d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ae32b) overlaps instruction at (ram,0x0001404ae328)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ae35a) */
/* WARNING: Removing unreachable block (ram,0x0001404ae32b) */

void FUN_1404ae2d8(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong in_RAX;
  uint *puVar18;
  byte bVar20;
  int unaff_EBP;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcVar19;
  
  bVar20 = (byte)((ulonglong)param_2 >> 8);
  uVar12 = SUB82(param_2,0);
  *(int *)(param_2 + param_1) = *(int *)(param_2 + param_1) + unaff_EBP;
  *(char *)(param_1 + in_RAX) = *(char *)(param_1 + in_RAX) + (char)((ulonglong)param_1 >> 8);
  uVar13 = (uint)in_RAX & 0x1ef02000;
  puVar18 = (uint *)(ulonglong)uVar13;
  param_1 = param_1 + -1;
  if (param_1 == 0 || (in_RAX & 0x1ef02000) == 0) {
    bVar20 = *param_2;
    *param_2 = *param_2 >> 1;
    *(byte *)puVar18 = (byte)(CONCAT11((bVar20 & 1) != 0,(char)*puVar18) >> 7) | (char)*puVar18 << 2
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = *param_2;
  *puVar18 = *puVar18 & uVar13;
  *(char *)puVar18 = (char)*puVar18;
  uVar6 = *puVar18;
  uVar9 = uVar13 + *puVar18;
  out(*unaff_RSI,uVar12);
  uVar7 = *(uint *)(ulonglong)uVar9;
  uVar10 = uVar9 + *(uint *)(ulonglong)uVar9;
  uVar14 = uVar10 + CARRY4(uVar13,uVar6);
  puVar18 = (uint *)(ulonglong)uVar14;
  uVar3 = in(uVar12);
  *unaff_RDI = uVar3;
  bVar5 = *param_2;
  *puVar18 = *puVar18 & uVar14;
  uVar14 = CONCAT31((int3)(uVar14 >> 8),(char)uVar14 + (char)*puVar18);
  puVar18 = (uint *)(ulonglong)uVar14;
  *(char *)((longlong)puVar18 + 5) =
       *(char *)((longlong)puVar18 + 5) + (char)((ulonglong)param_1 >> 8);
  pbVar1 = (byte *)((longlong)puVar18 + 0x21);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar20;
  uVar15 = uVar14 + *puVar18 + (uint)CARRY1(bVar2,bVar20);
  out(unaff_RSI[1],uVar12);
  uVar8 = (uint)(CARRY4(uVar14,*puVar18) || CARRY4(uVar14 + *puVar18,(uint)CARRY1(bVar2,bVar20)));
  uVar14 = *(uint *)(ulonglong)uVar15;
  uVar11 = uVar15 + *(uint *)(ulonglong)uVar15;
  uVar16 = uVar11 + uVar8;
  uVar3 = in(uVar12);
  unaff_RDI[1] = uVar3;
  uRam00000001a44fe330 = uRam00000001a44fe330 & uVar16;
  uVar16 = uVar16 + *(int *)(ulonglong)uVar16 +
           *(int *)(ulonglong)(uVar16 + *(int *)(ulonglong)uVar16) + 0xc4050002;
  uVar17 = uVar16 | 0x13290b00;
  pcVar19 = (char *)(ulonglong)uVar17;
  cRam00000001984af676 = cRam00000001984af676 + (char)param_2;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),
               (((((char)param_1 - bVar4) - bVar5) -
                (CARRY4(uVar9,uVar7) || CARRY4(uVar10,(uint)CARRY4(uVar13,uVar6)))) - *param_2) -
               (CARRY4(uVar15,uVar14) || CARRY4(uVar11,uVar8))) != 1) {
    *pcVar19 = *pcVar19 + (char)uVar16;
    pcVar19[0x28] = pcVar19[0x28] + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + (char)(uVar17 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

