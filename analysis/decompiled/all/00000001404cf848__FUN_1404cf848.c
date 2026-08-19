// Function: FUN_1404cf848
// Addr: 1404cf848
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf848(int *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  
  *param_1 = *param_1 + unaff_EBX;
  uVar4 = *in_RAX;
  puVar2 = (uint *)(&stack0x00000000 + CONCAT44(unaff_0000001c,unaff_EBX));
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - param_2;
  piVar1 = (int *)(CONCAT44(unaff_0000001c,unaff_EBX) + CONCAT44(unaff_0000001c,unaff_EBX));
  *piVar1 = (*piVar1 - unaff_ESI) - (uint)(uVar3 < param_2);
  *(char *)param_1 = (char)*param_1 + (char)unaff_EBX;
  piVar1 = (int *)((ulonglong)((uint)in_RAX | uVar4) * 2);
  *piVar1 = *piVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

