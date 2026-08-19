// Function: FUN_1404cef7c
// Addr: 1404cef7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cef7c(byte param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  bRam000000014dffefc5 = bRam000000014dffefc5 ^ param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

