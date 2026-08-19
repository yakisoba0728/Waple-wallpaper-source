// Function: FUN_1404a3ac8
// Addr: 1404a3ac8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3ac8(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + -0x6fe1fffa);
  *puVar1 = *puVar1 | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

