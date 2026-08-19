// Function: FUN_1404d51ac
// Addr: 1404d51ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d51ac(char *param_1)

{
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & (uint)&stack0x00000000;
  bVar1 = in(5);
  *param_1 = *param_1 + in_AH;
  if (*param_1 == '\0') {
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
         *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) | bVar1;
    bRam0000000146345204 = bRam0000000146345204 << 1 | (char)bRam0000000146345204 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

