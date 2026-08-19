// Function: FUN_1404afad8
// Addr: 1404afad8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404afb29) overlaps instruction at (ram,0x0001404afb28)
    */

void FUN_1404afad8(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  byte bVar10;
  undefined8 in_RAX;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  byte bVar11;
  byte bVar12;
  char unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined1 in_YMM6 [32];
  undefined1 auStack_18 [16];
  undefined1 auStack_8 [8];
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
  uVar6 = (uint)puVar7 | *puVar7;
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + bVar12;
  param_1[unaff_RBP] = param_1[unaff_RBP] + bVar11;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + bVar12;
  pbVar1 = (byte *)((ulonglong)uVar6 - 0x3f);
  bVar2 = *pbVar1;
  bVar10 = (byte)(uVar6 >> 8);
  *pbVar1 = *pbVar1 + bVar10;
  uVar3 = (undefined3)(uVar6 >> 8);
  cVar4 = (char)uVar6 + CARRY1(bVar2,bVar10);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *param_1 = *param_1 + (char)auStack_8;
  *pcVar8 = *pcVar8 + cVar4;
  pbVar1 = (byte *)(pcVar8 + -0x3f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  bVar5 = cVar4 + CARRY1(bVar2,bVar10);
  *param_1 = *param_1 + bVar5;
  bVar5 = bVar5 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar5) * 2);
  bVar12 = bVar12 | *(byte *)(param_2 + -0x3ffb0ffa);
  pbVar1 = (byte *)((ulonglong)CONCAT31(uVar3,bVar5) + 0x21);
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar10 + *pbVar1,bVar5));
  pbVar9 = (byte *)(ulonglong)uVar6;
  *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar10,*pbVar1);
  *pbVar9 = *pbVar9 + unaff_BL;
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar11;
  *(uint *)pbVar9 = *(int *)pbVar9 + uVar6 + (uint)CARRY1(bVar2,bVar11);
  pbVar9[CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar12,bVar11))] =
       pbVar9[CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar12,bVar11))] | bVar12;
  pbVar9 = pbVar9 + -0x34;
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar12;
  vunpcklps_avx(in_YMM6,*(undefined1 (*) [32])
                         (ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5 + CARRY1(bVar2,bVar12)));
  *param_1 = *param_1 + (char)auStack_18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

