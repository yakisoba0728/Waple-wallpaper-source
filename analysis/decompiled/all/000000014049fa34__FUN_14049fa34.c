// Function: FUN_14049fa34
// Addr: 14049fa34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fa34(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int in_EAX;
  undefined4 in_register_00000004;
  int *piVar5;
  char cVar6;
  char cVar7;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  int iVar4;
  
  cVar7 = (char)((ulonglong)param_1 >> 8);
  cVar6 = (char)param_1;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  cVar3 = in(0xcd);
  iVar4 = CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
  *(int *)CONCAT44(in_register_00000004,iVar4) =
       *(int *)CONCAT44(in_register_00000004,iVar4) + iVar4;
  *param_4 = *param_4;
  *(char *)CONCAT44(in_register_00000004,iVar4) =
       *(char *)CONCAT44(in_register_00000004,iVar4) + cVar3;
  *(char *)(unaff_RSI + -0x1bfffe34) = *(char *)(unaff_RSI + -0x1bfffe34) + cVar6;
  pcVar2 = (code *)swi(1);
  piVar5 = (int *)(*pcVar2)();
  *(char *)((longlong)piVar5 + -7) = *(char *)((longlong)piVar5 + -7) + cVar6;
  *param_4 = *param_4 + '\b';
  cVar3 = (char)piVar5;
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x34);
  *pcVar1 = *pcVar1 + cVar7;
  *piVar5 = *piVar5 + (int)piVar5;
  *piVar5 = *piVar5 + (int)piVar5;
  *param_4 = *param_4 + '\b';
  *param_2 = *param_2 + cVar3;
  *(char *)piVar5 = (char)*piVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

