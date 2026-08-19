// Function: FUN_1404a3188
// Addr: 1404a3188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3188(byte param_1,byte *param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *param_2 = *param_2 ^ param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

