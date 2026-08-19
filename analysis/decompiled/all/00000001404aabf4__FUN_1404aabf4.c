// Function: FUN_1404aabf4
// Addr: 1404aabf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aabf4(char *param_1,longlong param_2)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  uint unaff_ESI;
  
  *param_1 = *param_1 + (char)in_EAX;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 | in_EAX;
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

