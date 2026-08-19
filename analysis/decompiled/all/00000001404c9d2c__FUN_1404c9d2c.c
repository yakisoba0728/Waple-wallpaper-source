// Function: FUN_1404c9d2c
// Addr: 1404c9d2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9d2c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam0000000194519d34 = uRam0000000194519d34 & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  cRam00000001184ccfa1 = cRam00000001184ccfa1 + (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

