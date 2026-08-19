// Function: FUN_1404d42d0
// Addr: 1404d42d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d42d0(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

