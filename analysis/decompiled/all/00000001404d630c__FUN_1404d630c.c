// Function: FUN_1404d630c
// Addr: 1404d630c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d630c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uRam00000001a4526318 = uRam00000001a4526318 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

