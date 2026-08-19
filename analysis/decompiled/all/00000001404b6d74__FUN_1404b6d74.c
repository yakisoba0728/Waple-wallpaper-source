// Function: FUN_1404b6d74
// Addr: 1404b6d74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6d74(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 in_RAX;
  char *pcVar11;
  int *piVar12;
  char cVar13;
  longlong lVar14;
  byte bVar15;
  char cVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  char unaff_BL;
  char cVar19;
  byte unaff_BH;
  byte bVar20;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar21;
  unkbyte10 in_ST0;
  uint *puVar10;
  
  uVar18 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar16 = (char)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  cVar4 = (byte)in_RAX + 100;
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  uVar6 = (uint)puVar10;
  *puVar10 = *puVar10 + uVar6 + (uint)(0x9b < (byte)in_RAX);
  cVar19 = unaff_BL + -0x1b;
  param_2[-0x7bffe415] = param_2[-0x7bffe415] + cVar19;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *param_4 = *param_4;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  *(char *)((longlong)puVar10 + -0x65ffe415) = *(char *)((longlong)puVar10 + -0x65ffe415) + cVar4;
  *(char *)puVar10 = (char)*puVar10 + cVar4;
  bVar20 = (byte)((ulonglong)param_1 >> 8);
  uVar8 = (uint)CARRY1(unaff_BH,bVar20);
  uVar7 = (uVar6 - *puVar10) - uVar8;
  f2xm1(in_ST0);
  uVar8 = (uVar7 - *(int *)(ulonglong)uVar7) - (uint)(uVar6 < *puVar10 || uVar6 - *puVar10 < uVar8);
  *param_1 = *param_1 + (char)(uVar8 >> 8);
  bVar5 = (byte)uVar8 | *(byte *)((ulonglong)uVar8 * 2);
  uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar5);
  bVar20 = unaff_BH + bVar20 | *(byte *)((longlong)(ulonglong)uVar8 + 5);
  bVar21 = CARRY1(bRam00000001104b742d,bVar5);
  bRam00000001104b742d = bRam00000001104b742d + bVar5;
  uVar8 = (uVar8 - *(int *)(ulonglong)uVar8) - (uint)bVar21;
  bVar5 = (byte)uVar8;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + bVar5;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar5 + bVar15);
  iVar9 = (uVar8 - *(int *)(ulonglong)uVar8) - (uint)CARRY1(bVar5,bVar15);
  lVar14 = *(longlong *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) * 0x21;
  bVar5 = *unaff_RSI;
  uVar3 = (undefined3)((uint)iVar9 >> 8);
  *param_2 = *param_2 + cVar16;
  pcVar11 = (char *)((ulonglong)CONCAT31(uVar3,(byte)iVar9 ^ bVar5) ^ 0xe);
  cVar13 = (char)lVar14;
  cRam00000001454b7355 = cRam00000001454b7355 + cVar13;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(pcVar11 + in_FS_OFFSET) = uVar2;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19));
  *param_2 = *param_2 + bVar15;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19));
  pcVar11[0x69] = pcVar11[0x69] + bVar20;
  *param_4 = *param_4 + '\x02';
  cVar4 = (char)pcVar11;
  *(char *)((longlong)pcVar11 * 2) = *(char *)((longlong)pcVar11 * 2) + cVar4;
  pcVar11[5] = pcVar11[5] + (char)((ulonglong)lVar14 >> 8);
  *pcVar11 = *pcVar11 + cVar4;
  pcVar11 = (char *)((ulonglong)CONCAT31(uVar3,cVar4) ^ 0xe);
  cVar4 = (char)pcVar11;
  *pcVar11 = *pcVar11 + cVar4;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19));
  *param_2 = *param_2 + bVar15;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19));
  pcVar11[0x69] = pcVar11[0x69] + bVar20;
  *param_4 = *param_4 + '\x02';
  *pcVar11 = *pcVar11 + cVar4;
  *pcVar11 = *pcVar11 + cVar4;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19));
  *param_2 = *param_2 + bVar15;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar20,cVar19));
  pcVar11[0x69] = pcVar11[0x69] + bVar20;
  *param_4 = *param_4 + cVar4;
  uVar8 = (uint)pcVar11 | *(uint *)((longlong)pcVar11 * 2);
  bVar5 = *unaff_RSI;
  cVar4 = (char)uVar8;
  *unaff_RSI = *unaff_RSI + cVar4;
  if (!SCARRY1(bVar5,cVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + '\x02';
  *(char *)CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(cVar16,2))) =
       *(char *)CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(cVar16,2))) + '\x02';
  in(0xe);
  cRam00000001454b7bd5 = cRam00000001454b7bd5 + cVar13;
  piVar12 = (int *)CONCAT71((uint7)(uint3)(uVar8 >> 8),0xfb);
  uVar8 = (int)piVar12 - *piVar12;
  puVar10 = (uint *)(ulonglong)uVar8;
  *puVar10 = *puVar10 & uVar8;
  *(char *)puVar10 = (char)*puVar10 + (char)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

