// Function: FUN_1404c8878
// Addr: 1404c8878
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8878(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam0000000134518880 = uRam0000000134518880 & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

