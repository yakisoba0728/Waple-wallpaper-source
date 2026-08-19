// Function: FUN_1404ac0ac
// Addr: 1404ac0ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac0ac(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(byte *)(param_2 + -0x55acfff1) =
       *(byte *)(param_2 + -0x55acfff1) & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

