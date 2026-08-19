// Function: FUN_1404d6d94
// Addr: 1404d6d94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6d94(char *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  byte *pbVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  byte *in_RAX;
  undefined6 uVar17;
  uint *puVar13;
  int *piVar14;
  char *pcVar15;
  byte bVar18;
  char cVar19;
  byte bVar20;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_R11B;
  byte unaff_R12B;
  longlong unaff_retaddr;
  byte bVar3;
  char cVar16;
  
  bVar20 = (byte)((ulonglong)param_2 >> 8);
  cVar19 = (char)((ulonglong)param_1 >> 8);
  bVar18 = (byte)param_1;
  uVar7 = SUB82(param_2,0);
  bVar10 = (byte)in_RAX;
  param_2[0x36] = bVar10;
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[0x21004d6c] = in_RAX[0x21004d6c] + cVar11;
  *in_RAX = *in_RAX + bVar10;
  in_RAX[0x42] = in_RAX[0x42] + (byte)param_2;
  in_RAX[-0x5fffc9be] = in_RAX[-0x5fffc9be] + bVar18;
  uVar4 = in(uVar7);
  *unaff_RDI = uVar4;
  bVar1 = *param_4;
  *param_4 = *param_4 + in_R11B;
  *param_2 = (*param_2 - bVar10) - CARRY1(bVar1,in_R11B);
  *param_1 = *param_1 + bVar18;
  bRam000000016f1d8e87 =
       bRam000000016f1d8e87 << (bVar18 & 7) | bRam000000016f1d8e87 >> 8 - (bVar18 & 7);
  *in_RAX = *in_RAX + bVar10;
  *in_RAX = *in_RAX + bVar10;
  *(uint *)(in_RAX + (longlong)param_2) = *(uint *)(in_RAX + (longlong)param_2) & (uint)in_RAX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar10;
  bVar5 = *in_RAX;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) ^ bVar20;
  *(char *)(unaff_RBP + 0x33) = *(char *)(unaff_RBP + 0x33) + unaff_BL;
  uVar17 = (undefined6)((ulonglong)in_RAX >> 0x10);
  uVar4 = in(uVar7);
  unaff_RDI[1] = uVar4;
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  pbVar9 = (byte *)(CONCAT62(uVar17,CONCAT11(cVar11 + unaff_BL,bVar10 | bVar5)) * 2);
  bVar2 = *pbVar9;
  bVar3 = *pbVar9;
  *pbVar9 = (bVar3 - bVar18) - CARRY1(bVar1,unaff_R12B);
  puVar13 = (uint *)CONCAT62(uVar17,CONCAT11(-(bVar2 < bVar18 ||
                                              (byte)(bVar3 - bVar18) < CARRY1(bVar1,unaff_R12B)),
                                             bVar10 | bVar5));
  uVar12 = (uint)puVar13 | *puVar13;
  param_1[unaff_RBP] = param_1[unaff_RBP] + bVar20;
  piVar14 = (int *)((ulonglong)CONCAT31((int3)(uVar12 >> 8),(char)uVar12 + -0x3c) | 100);
  iVar6 = (int)piVar14 + *piVar14;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)param_2;
  cVar11 = (byte)iVar6 + 0x34;
  uVar12 = CONCAT31((int3)((uint)iVar6 >> 8),cVar11);
  *(int *)(ulonglong)uVar12 = *(int *)(ulonglong)uVar12 + uVar12 + (uint)(0xcb < (byte)iVar6);
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + cVar19;
  uVar8 = (undefined2)((uint)iVar6 >> 0x10);
  cVar16 = (char)((uint)iVar6 >> 8) + cVar19;
  pcVar15 = (char *)(ulonglong)CONCAT22(uVar8,CONCAT11(cVar16,cVar11));
  uVar4 = in(uVar7);
  unaff_RDI[2] = uVar4;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar15 = *pcVar15 + cVar11;
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + unaff_BL;
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + cVar19;
  pcVar15 = (char *)(ulonglong)CONCAT22(uVar8,CONCAT11(cVar16 + cVar19,cVar11));
  uVar4 = in(uVar7);
  unaff_RDI[3] = uVar4;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar15 = *pcVar15 + cVar11;
  *pcVar15 = *pcVar15 + bVar20;
  *(char *)(unaff_retaddr + 0x33) = *(char *)(unaff_retaddr + 0x33) + unaff_BL;
  uVar4 = in(uVar7);
  unaff_RDI[4] = uVar4;
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

