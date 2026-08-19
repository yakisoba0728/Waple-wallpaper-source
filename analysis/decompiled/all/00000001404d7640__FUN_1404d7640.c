// Function: FUN_1404d7640
// Addr: 1404d7640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7640(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char *unaff_RSI;
  char *in_R9;
  char unaff_R12B;
  
  *in_R9 = *in_R9 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + (in_AL ^ 0x75);
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0x75) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0x75) + (in_AL ^ 0x75);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

