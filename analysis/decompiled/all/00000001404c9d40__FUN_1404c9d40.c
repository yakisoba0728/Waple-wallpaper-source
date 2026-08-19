// Function: FUN_1404c9d40
// Addr: 1404c9d40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9d40(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  cRam00000001184ccfb1 = cRam00000001184ccfb1 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

