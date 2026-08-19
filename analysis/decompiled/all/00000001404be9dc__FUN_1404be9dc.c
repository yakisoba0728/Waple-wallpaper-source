// Function: FUN_1404be9dc
// Addr: 1404be9dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be9dc(uint *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar11;
  undefined8 in_RAX;
  char *pcVar8;
  char *pcVar10;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char cVar12;
  uint uVar13;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  bool bVar15;
  byte *pbVar9;
  ulonglong uVar14;
  
  bVar3 = (byte)in_RAX;
  cVar11 = (char)((ulonglong)in_RAX >> 8) + bVar3;
  uVar5 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar11,bVar3)) | 0xb740000;
  pbVar9 = (byte *)(ulonglong)uVar5;
  *pbVar9 = *pbVar9 + bVar3;
  bVar4 = *pbVar9;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar3 | bVar4);
  bRam000000014e0aea15 = bRam000000014e0aea15 | 0x26;
  pcVar8 = (char *)((ulonglong)uVar5 + 0xd);
  *pcVar8 = *pcVar8 + cVar11;
  *param_4 = *param_4 + (bVar3 | bVar4);
  uVar5 = uVar5 | *(uint *)CONCAT44(unaff_0000001c,
                                    CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  pcVar8 = (char *)(ulonglong)uVar5;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (char)param_1;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) +
       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  bVar4 = (byte)uVar5;
  *pcVar8 = *pcVar8 + bVar4;
  *pcVar8 = *pcVar8 + bVar4;
  *param_1 = *param_1 & (uint)&stack0xfffffffffffffff8;
  uVar13 = (uint)&stack0xfffffffffffffff8 & unaff_ESI;
  uVar14 = (ulonglong)uVar13;
  bVar15 = bVar4 < *(byte *)(ulonglong)uVar5;
  uVar2 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(-bVar15,bVar4 - *(byte *)(ulonglong)uVar5));
  uVar5 = (uint)bVar15;
  uVar1 = uVar2 - *(uint *)(ulonglong)uVar2;
  uVar6 = uVar1 - uVar5;
  uVar5 = (uint)(uVar2 < *(uint *)(ulonglong)uVar2 || uVar1 < uVar5);
  uVar1 = uVar6 + uVar13;
  iVar7 = uVar1 + uVar5;
  bVar4 = (char)iVar7 - (CARRY4(uVar6,uVar13) || CARRY4(uVar1,uVar5));
  pbVar9 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),bVar4);
  *(char *)(uVar14 + CONCAT44(unaff_00000034,unaff_ESI)) =
       *(char *)(uVar14 + CONCAT44(unaff_00000034,unaff_ESI)) + bVar4;
  *pbVar9 = *pbVar9 & bVar4;
  *(byte **)(uVar14 - 8) = pbVar9;
  cVar11 = (char)((uint)iVar7 >> 8) + *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  uVar5 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(cVar11,bVar4));
  pcVar10 = (char *)(ulonglong)uVar5;
  pcVar8 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   0x12);
  *pcVar8 = *pcVar8 + unaff_BL;
  *(char *)(param_1 + unaff_RBP * 2) = (char)param_1[unaff_RBP * 2] + cVar11;
  cVar12 = (char)(uVar14 - 8);
  *param_4 = *param_4 + cVar12;
  *pcVar10 = *pcVar10 + bVar4;
  pcVar10[0x12] = pcVar10[0x12] + (char)param_2;
  pcVar8 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   0x12);
  *pcVar8 = *pcVar8 + unaff_BL;
  *(char *)(param_1 + unaff_RBP * 2) = (char)param_1[unaff_RBP * 2] + cVar11;
  *param_4 = *param_4 + cVar12;
  iVar7 = uVar5 + 0x54050002;
  *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(undefined1 *)CONCAT44(unaff_00000034,unaff_ESI);
  *(char *)(unaff_RDI + param_2) = *(char *)(unaff_RDI + param_2) + (char)param_1;
  *(char *)param_1 = (char)*param_1 + cVar12;
  iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + '&') + 0x64050002;
  bVar4 = (byte)iVar7;
  pcVar8 = (char *)((ulonglong)
                    (CONCAT31((int3)((uint)iVar7 >> 8),
                              bVar4 + unaff_BH + '&' + CARRY1(bVar4,unaff_BH)) | 0x2614f300) - 0x17)
  ;
  *pcVar8 = *pcVar8 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

