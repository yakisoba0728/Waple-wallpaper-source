// Function: FUN_1404ab674
// Addr: 1404ab674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab674(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  char *unaff_RSI;
  
  uRam00000001b44fb67c = uRam00000001b44fb67c & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | (byte)in_EAX;
  *unaff_RSI = *unaff_RSI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

