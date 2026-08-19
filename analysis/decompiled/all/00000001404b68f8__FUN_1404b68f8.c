// Function: FUN_1404b68f8
// Addr: 1404b68f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b68f8(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

