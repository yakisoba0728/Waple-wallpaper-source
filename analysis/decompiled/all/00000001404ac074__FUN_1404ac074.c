// Function: FUN_1404ac074
// Addr: 1404ac074
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac074(longlong param_1,longlong param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

