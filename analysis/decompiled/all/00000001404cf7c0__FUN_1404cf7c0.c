// Function: FUN_1404cf7c0
// Addr: 1404cf7c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf7c0(byte *param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *in_RAX;
  char *pcVar10;
  char cVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  char cVar14;
  byte bVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  byte bVar18;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int *unaff_RSI;
  char unaff_R12B;
  char unaff_R13B;
  byte *pbVar8;
  int *piVar9;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  uVar13 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar11 = (char)param_1;
  bVar4 = (byte)in_RAX;
  *param_1 = *param_1 + bVar4;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar15;
  if (CARRY1(bVar1,bVar15) || *param_2 == 0) {
    bVar1 = *in_RAX;
    *in_RAX = *in_RAX + bVar4;
    *unaff_RSI = (*unaff_RSI - unaff_EBX) - (uint)CARRY1(bVar1,bVar4);
    uVar7 = (int)in_RAX + 0x1e011000;
    piVar9 = (int *)(ulonglong)uVar7;
    pcVar10 = (char *)((longlong)piVar9 + (longlong)unaff_RSI * 2);
    *pcVar10 = *pcVar10 + (char)uVar7;
    pbVar8 = (byte *)(ulonglong)(uint)((int)unaff_RSI + *piVar9);
    cVar14 = (char)param_2 + (char)*piVar9;
    cVar3 = (char)(uVar7 >> 8);
    *(char *)piVar9 = (char)*piVar9 + cVar3;
    *pbVar8 = *pbVar8 >> 1;
    uVar2 = (undefined3)(uVar7 >> 8);
    bVar4 = (char)uVar7 + cVar14;
    pcVar10 = (char *)(ulonglong)CONCAT31(uVar2,bVar4);
    *pcVar10 = *pcVar10 + bVar4;
    *param_1 = *param_1 + cVar3;
    *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,cVar14))) =
         *(byte *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(bVar15,cVar14))) | bVar4;
    *pcVar10 = *pcVar10 + cVar11;
    out(*(undefined4 *)pbVar8,CONCAT11(bVar15,cVar14));
    *param_1 = *param_1 + unaff_R12B;
    *pcVar10 = *pcVar10 + bVar4;
    pcVar10[0x5e] = pcVar10[0x5e] + cVar14;
    out(*(undefined4 *)(pbVar8 + 4),CONCAT11(bVar15,cVar14));
    bVar1 = *param_1;
    *param_1 = *param_1 + param_3;
    *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
         (*(int *)CONCAT44(unaff_0000001c,unaff_EBX) - (int)param_1) - (uint)CARRY1(bVar1,param_3);
    bVar1 = *param_1;
    bVar18 = (byte)unaff_EBX;
    *param_1 = *param_1 + bVar18;
    piVar9 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + CONCAT44(unaff_0000001c,unaff_EBX));
    *piVar9 = (*piVar9 - ((int)(pbVar8 + 4) + 4)) - (uint)(bVar4 < CARRY1(bVar1,bVar18));
    *param_1 = *param_1 + bVar18;
    piVar9 = (int *)((ulonglong)CONCAT31(uVar2,bVar4 - CARRY1(bVar1,bVar18)) * 2);
    *piVar9 = *piVar9 + CONCAT22(uVar16,CONCAT11(bVar15,cVar14));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX[0x6d00800e] = in_RAX[0x6d00800e] + (char)((ulonglong)in_RAX >> 8);
  iVar5 = (int)in_RAX + *(int *)param_2;
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  cVar3 = (char)iVar5 + 'y';
  bVar4 = cVar3 + *(char *)(ulonglong)CONCAT31(uVar2,cVar3);
  uVar7 = CONCAT31(uVar2,bVar4);
  pbVar8 = (byte *)(ulonglong)uVar7;
  cVar3 = (char)((ulonglong)param_1 >> 8) + (char)*unaff_RSI;
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar4;
  *(uint *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(cVar3,cVar11))) =
       (*(int *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(cVar3,cVar11))) -
       CONCAT22(uVar12,CONCAT11(cVar3,cVar11))) - (uint)CARRY1(bVar1,bVar4);
  uVar6 = uVar7 + 0x5420900;
  pbVar8 = (byte *)(ulonglong)uVar6;
  if (!SCARRY4(uVar7,0x5420900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar8 = *pbVar8 ^ (byte)uVar6;
  pbVar8[-0x4a] = pbVar8[-0x4a] + (char)param_2;
  pcVar10 = (char *)((ulonglong)
                     CONCAT31((int3)(uVar6 - *(int *)pbVar8 >> 8),
                              (char)(uVar6 - *(int *)pbVar8) + '\t') + 0x31);
  *pcVar10 = *pcVar10 + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

