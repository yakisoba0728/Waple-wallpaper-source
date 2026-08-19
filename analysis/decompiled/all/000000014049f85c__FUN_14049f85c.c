// Function: FUN_14049f85c
// Addr: 14049f85c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f85c(int *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_SPL;
  longlong unaff_RSI;
  undefined7 uVar5;
  undefined3 uVar4;
  
  uVar5 = (undefined7)((ulonglong)param_4 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -9);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(char *)CONCAT71(uVar5,1) = *(char *)CONCAT71(uVar5,1) + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  iVar3 = CONCAT31(uVar4,1);
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  out(param_2,iVar3);
  iVar3 = CONCAT31(uVar4,1);
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + (char)((ushort)param_2 >> 8);
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,iVar3) + -0x4f10ffff);
  *pbVar2 = *pbVar2 ^ 1;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

