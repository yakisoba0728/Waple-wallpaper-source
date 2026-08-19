// Function: FUN_1404b6db0
// Addr: 1404b6db0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6db0(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *in_RAX;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  longlong lVar11;
  byte bVar12;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar16;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool bVar17;
  unkbyte10 in_ST0;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  f2xm1(in_ST0);
  uVar5 = ((int)in_RAX - *in_RAX) - (uint)in_CF;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  bVar3 = (byte)uVar5 | *(byte *)((ulonglong)uVar5 * 2);
  uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar3);
  bVar16 = unaff_BH | *(byte *)((longlong)(ulonglong)uVar5 + 5);
  bVar17 = CARRY1(bRam00000001104b742d,bVar3);
  bRam00000001104b742d = bRam00000001104b742d + bVar3;
  uVar5 = (uVar5 - *(int *)(ulonglong)uVar5) - (uint)bVar17;
  bVar3 = (byte)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + bVar3;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar3 + bVar12);
  iVar6 = (uVar5 - *(int *)(ulonglong)uVar5) - (uint)CARRY1(bVar3,bVar12);
  lVar11 = *(longlong *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) * 0x21;
  bVar3 = *unaff_RSI;
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  *param_2 = *param_2 + cVar13;
  pcVar7 = (char *)((ulonglong)CONCAT31(uVar2,(byte)iVar6 ^ bVar3) ^ 0xe);
  cVar10 = (char)lVar11;
  cRam00000001454b7355 = cRam00000001454b7355 + cVar10;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)(pcVar7 + in_FS_OFFSET) = uVar1;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL));
  *param_2 = *param_2 + bVar12;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL));
  pcVar7[0x69] = pcVar7[0x69] + bVar16;
  *param_4 = *param_4 + '\x02';
  cVar4 = (char)pcVar7;
  *(char *)((longlong)pcVar7 * 2) = *(char *)((longlong)pcVar7 * 2) + cVar4;
  pcVar7[5] = pcVar7[5] + (char)((ulonglong)lVar11 >> 8);
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7 = (char *)((ulonglong)CONCAT31(uVar2,cVar4) ^ 0xe);
  cVar4 = (char)pcVar7;
  *pcVar7 = *pcVar7 + cVar4;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL));
  *param_2 = *param_2 + bVar12;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL));
  pcVar7[0x69] = pcVar7[0x69] + bVar16;
  *param_4 = *param_4 + '\x02';
  *pcVar7 = *pcVar7 + cVar4;
  *pcVar7 = *pcVar7 + cVar4;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL));
  *param_2 = *param_2 + bVar12;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar16,unaff_BL));
  pcVar7[0x69] = pcVar7[0x69] + bVar16;
  *param_4 = *param_4 + cVar4;
  uVar5 = (uint)pcVar7 | *(uint *)((longlong)pcVar7 * 2);
  bVar3 = *unaff_RSI;
  cVar4 = (char)uVar5;
  *unaff_RSI = *unaff_RSI + cVar4;
  if (!SCARRY1(bVar3,cVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + '\x02';
  *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,2))) =
       *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,2))) + '\x02';
  in(0xe);
  cRam00000001454b7bd5 = cRam00000001454b7bd5 + cVar10;
  piVar8 = (int *)CONCAT71((uint7)(uint3)(uVar5 >> 8),0xfb);
  uVar5 = (int)piVar8 - *piVar8;
  puVar9 = (uint *)(ulonglong)uVar5;
  *puVar9 = *puVar9 & uVar5;
  *(char *)puVar9 = (char)*puVar9 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

