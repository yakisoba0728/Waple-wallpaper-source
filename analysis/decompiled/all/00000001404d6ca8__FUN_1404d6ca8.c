// Function: FUN_1404d6ca8
// Addr: 1404d6ca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6ca8(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam0000000104526cb0 = uRam0000000104526cb0 & in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

