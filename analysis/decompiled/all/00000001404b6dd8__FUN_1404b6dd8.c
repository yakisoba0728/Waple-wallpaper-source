// Function: FUN_1404b6dd8
// Addr: 1404b6dd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6dd8(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar8;
  char *pcVar5;
  int *piVar6;
  uint *puVar7;
  char cVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  longlong in_FS_OFFSET;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  lVar10 = *(longlong *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 0x21;
  bVar1 = *unaff_RSI;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + cVar12;
  pcVar5 = (char *)(CONCAT71(uVar8,(byte)in_RAX ^ bVar1) ^ 0xe);
  cVar9 = (char)lVar10;
  cRam00000001454b7355 = cRam00000001454b7355 + cVar9;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(pcVar5 + in_FS_OFFSET) = uVar2;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *param_2 = *param_2 + cVar11;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar5[0x69] = pcVar5[0x69] + unaff_BH;
  *param_4 = *param_4 + '\x05';
  cVar3 = (char)pcVar5;
  *(char *)((longlong)pcVar5 * 2) = *(char *)((longlong)pcVar5 * 2) + cVar3;
  pcVar5[5] = pcVar5[5] + (char)((ulonglong)lVar10 >> 8);
  *pcVar5 = *pcVar5 + cVar3;
  pcVar5 = (char *)(CONCAT71(uVar8,cVar3) ^ 0xe);
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *param_2 = *param_2 + cVar11;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar5[0x69] = pcVar5[0x69] + unaff_BH;
  *param_4 = *param_4 + '\x05';
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *param_2 = *param_2 + cVar11;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       -*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar5[0x69] = pcVar5[0x69] + unaff_BH;
  *param_4 = *param_4 + cVar3;
  uVar4 = (uint)pcVar5 | *(uint *)((longlong)pcVar5 * 2);
  bVar1 = *unaff_RSI;
  cVar3 = (char)uVar4;
  *unaff_RSI = *unaff_RSI + cVar3;
  if (!SCARRY1(bVar1,cVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + '\x05';
  *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,2))) =
       *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,2))) + '\x02';
  in(0xe);
  cRam00000001454b7bd5 = cRam00000001454b7bd5 + cVar9;
  piVar6 = (int *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0xfb);
  uVar4 = (int)piVar6 - *piVar6;
  puVar7 = (uint *)(ulonglong)uVar4;
  *puVar7 = *puVar7 & uVar4;
  *(char *)puVar7 = (char)*puVar7 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

