// Function: FUN_1404b32a8
// Addr: 1404b32a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b32a8(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  puVar1 = (uint *)(param_2 + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 & in_EAX;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

