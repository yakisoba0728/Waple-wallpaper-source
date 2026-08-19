// Function: FUN_1404c5f4c
// Addr: 1404c5f4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5f4c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BL;
  byte *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RSI = *unaff_RSI ^ unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

