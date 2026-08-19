// Function: FUN_1404a447c
// Addr: 1404a447c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a447c(longlong param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char in_CF;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 't' + in_CF);
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) | uVar1;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

