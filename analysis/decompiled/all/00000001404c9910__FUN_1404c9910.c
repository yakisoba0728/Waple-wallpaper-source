// Function: FUN_1404c9910
// Addr: 1404c9910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9910(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined3 uVar2;
  char cVar3;
  char cVar10;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined8 in_RAX;
  undefined7 uVar11;
  int *piVar9;
  undefined1 uVar12;
  byte bVar13;
  undefined6 uVar14;
  char unaff_BL;
  char unaff_BH;
  char cVar15;
  undefined6 unaff_0000001a;
  int *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  uint *puVar7;
  char *pcVar8;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  uVar12 = SUB81(param_2,0);
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar1 = *(undefined1 *)CONCAT71(uVar11,0x21);
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  uVar5 = (int)(short)((ushort)CONCAT71(uVar11,uVar1) ^ 0x21) + 0x64050002;
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 | uVar5;
  *param_2 = *param_2 & 0xe7003221;
  *(byte *)puVar7 = (char)*puVar7 + bVar13;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  bVar13 = bVar13 | *(byte *)((longlong)param_2 + (longlong)param_1);
  iVar6 = CONCAT31((int3)(char)(uVar5 >> 8),
                   (byte)uVar5 | *(byte *)((ulonglong)(uint)(int)(short)uVar5 * 2)) + -0x18fff7cc;
  *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) & 0xe7003221;
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  cVar3 = (char)iVar6 + unaff_BH;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) & 0xe7003221;
  pcVar8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4 + 0x4c] =
       pcVar8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4 + 0x4c] + (char)param_1;
  cVar10 = (char)((uint)iVar6 >> 8);
  *(char *)param_1 = (char)*param_1 + cVar10;
  *pcVar8 = *pcVar8 + cVar3;
  cVar15 = unaff_BH + cVar10;
  *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) & 0xe7003221;
  cVar3 = cVar3 + cVar15;
  uVar5 = CONCAT31(uVar2,cVar3);
  pcVar8 = (char *)(ulonglong)uVar5;
  *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) & 0xe7003221;
  pcVar8[CONCAT62(unaff_0000001a,CONCAT11(cVar15,unaff_BL)) * 4 + 0x4c] =
       pcVar8[CONCAT62(unaff_0000001a,CONCAT11(cVar15,unaff_BL)) * 4 + 0x4c] + (char)param_1;
  *(char *)param_1 = (char)*param_1 + cVar10;
  *pcVar8 = *pcVar8 + cVar3;
  cRam00000000ce006442 = cRam00000000ce006442 + cVar15;
  *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) & 0xe7003221;
  *pcVar8 = *pcVar8 + bVar13;
  sVar4 = (short)uVar5;
  pcVar8 = (char *)(ulonglong)(uint)(int)sVar4;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *pcVar8 = *pcVar8 + cVar3;
  pcVar8[-0x41ffcddf] = pcVar8[-0x41ffcddf] + bVar13;
  *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(uint *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) & 0xe7003221;
  *pcVar8 = *pcVar8 + (char)((ulonglong)param_1 >> 8);
  uVar5 = (uint)sVar4;
  piVar9 = (int *)(ulonglong)uVar5;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI - uVar5;
  *(char *)piVar9 = (char)*piVar9 + unaff_BL;
  *piVar9 = *piVar9 + uVar5;
  *param_1 = *param_1 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

