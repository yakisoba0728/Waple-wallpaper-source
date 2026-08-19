// Function: FUN_1404adcd0
// Addr: 1404adcd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adcd0(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  uRam00000001744fdcd8 = uRam00000001744fdcd8 & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

