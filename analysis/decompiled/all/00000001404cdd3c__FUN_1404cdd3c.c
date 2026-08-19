// Function: FUN_1404cdd3c
// Addr: 1404cdd3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdd3c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  char cVar9;
  int in_EAX;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined2 uVar14;
  uint uVar15;
  char cVar17;
  longlong lVar16;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  uVar12 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = in_EAX + 0xf0000874;
  cVar4 = (char)uVar6;
  uVar14 = (undefined2)param_2;
  out(uVar14,cVar4);
  cVar13 = (char)param_2;
  *param_1 = *param_1 + cVar13;
  out(uVar14,uVar6);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  cVar9 = (char)(uVar6 >> 8);
  *param_1 = *param_1 + cVar9;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + cVar4;
  cVar17 = (char)((ulonglong)param_2 >> 8);
  cVar4 = cVar4 + cVar17;
  iVar2 = CONCAT31((int3)(uVar6 >> 8),cVar4);
  out(uVar14,cVar4);
  *param_1 = *param_1 + cVar13;
  out(uVar14,iVar2);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  *param_1 = *param_1 + cVar9;
  uVar6 = iVar2 + 0x74050002;
  pbVar7 = (byte *)(ulonglong)uVar6;
  bVar5 = (byte)uVar6;
  *pbVar7 = *pbVar7 | bVar5;
  uVar3 = (undefined3)((ulonglong)param_1 >> 8);
  lVar16 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar17 + bVar5,cVar13));
  uVar10 = CONCAT31(uVar3,0x3f);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  *(char *)CONCAT44(uVar12,uVar10) = *(char *)CONCAT44(uVar12,uVar10) + (char)(uVar6 >> 8);
  *pbVar7 = *pbVar7 + bVar5;
  pbVar7[-0x39ffc04f] = pbVar7[-0x39ffc04f] + cVar13;
  uVar11 = CONCAT31(uVar3,0x3f);
  (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] =
       (&stack0x0000004c)[CONCAT71(unaff_00000019,unaff_BL) * 8] + unaff_BL;
  *(byte *)CONCAT44(uVar12,uVar11) = *(char *)CONCAT44(uVar12,uVar11) + bVar5;
  uVar6 = uVar6 | *(uint *)((longlong)pbVar7 * 2);
  uVar15 = (uint)lVar16 | *(uint *)(lVar16 + CONCAT44(uVar12,uVar11));
  uVar15 = uVar15 | *(uint *)((ulonglong)uVar15 + 7);
  LOCK();
  *(uint *)(ulonglong)uVar15 = *(uint *)(ulonglong)uVar15 & uVar11;
  UNLOCK();
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  uVar6 = uVar6 + 0x70000834;
  pcVar8 = (char *)(ulonglong)uVar6;
  out((short)uVar15,uVar6);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
  *pcVar8 = *pcVar8 + (char)uVar6;
  pcVar8[-0x11] = pcVar8[-0x11] + (char)(uVar15 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x4fffbf11);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

