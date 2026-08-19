// Function: FUN_1404c2e18
// Addr: 1404c2e18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2e18(longlong param_1,uint *param_2,char param_3)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  char in_R11B;
  
  *(char *)(param_1 + 0x2d) = *(char *)(param_1 + 0x2d) - (char)param_2;
  *(char *)(unaff_RDI + 0x2d) = *(char *)(unaff_RDI + 0x2d) + in_R11B;
  *(char *)((longlong)param_2 + param_1) = *(char *)((longlong)param_2 + param_1) + param_3;
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),0x72);
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(int *)CONCAT44(in_register_00000004,uVar1) + uVar1;
  *param_2 = *param_2 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

