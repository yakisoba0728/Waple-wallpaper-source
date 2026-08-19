// Function: FUN_14049fa18
// Addr: 14049fa18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fa18(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *pcVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [24];
  undefined4 uVar6;
  
  *(uint *)(param_2 + CONCAT44(in_register_00000004,in_EAX)) =
       *(uint *)(param_2 + CONCAT44(in_register_00000004,in_EAX)) & in_EAX;
  pbVar1 = auStackX_10 + unaff_RSI * 8 + -0x10;
  bVar4 = *pbVar1;
  bVar3 = (byte)in_EAX;
  *pbVar1 = *pbVar1 + bVar3;
  bVar4 = bVar3 + *(char *)CONCAT44(in_register_00000004,in_EAX) + CARRY1(bVar4,bVar3);
  uVar6 = CONCAT31((int3)(in_EAX >> 8),bVar4);
  uVar9 = SUB82(&stack0x00000000,0);
  *(undefined1 *)(unaff_RSI + 0x300001cc) = *(undefined1 *)(unaff_RSI + 0x300001cc);
  *param_4 = *param_4;
  *param_2 = *param_2 | bVar4;
  *(undefined1 *)CONCAT44(in_register_00000004,uVar6) =
       *(undefined1 *)CONCAT44(in_register_00000004,uVar6);
  in(0x13);
  *(undefined1 *)(unaff_RSI + -0x1bfffe34) = *(undefined1 *)(unaff_RSI + -0x1bfffe34);
  pcVar2 = (code *)swi(1);
  pcVar7 = (char *)(*pcVar2)();
  pcVar7[-7] = pcVar7[-7] + (char)uVar9;
  *param_4 = *param_4 + (char)auStackX_8;
  *pcVar7 = *pcVar7 + (char)pcVar7;
  *(char *)(unaff_RSI + -0x1bfffe34) = *(char *)(unaff_RSI + -0x1bfffe34) + (char)uVar9;
  pcVar2 = (code *)swi(1);
  piVar8 = (int *)(*pcVar2)();
  *(char *)((longlong)piVar8 + -7) = *(char *)((longlong)piVar8 + -7) + (char)uVar9;
  *param_4 = *param_4 + (char)auStackX_10;
  cVar5 = (char)piVar8;
  *(char *)piVar8 = (char)*piVar8 + cVar5;
  pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x34);
  *pcVar7 = *pcVar7 + (char)((ushort)uVar9 >> 8);
  *piVar8 = *piVar8 + (int)piVar8;
  *piVar8 = *piVar8 + (int)piVar8;
  *param_4 = *param_4 + (char)auStackX_10;
  *param_2 = *param_2 + cVar5;
  *(char *)piVar8 = (char)*piVar8 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

