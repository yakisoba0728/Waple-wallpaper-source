// Function: FUN_1404c2d74
// Addr: 1404c2d74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2d74(char param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  *param_3 = *param_3 + (longlong)param_3;
  *param_3 = *param_3 + (longlong)param_3;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),uRam120261000172b062);
  puVar1 = (uint *)(param_2 + CONCAT44(in_register_00000004,uVar2));
  *puVar1 = *puVar1 | uVar2;
  (&stack0x0000004e)[CONCAT44(in_register_00000004,uVar2)] =
       (&stack0x0000004e)[CONCAT44(in_register_00000004,uVar2)] + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

