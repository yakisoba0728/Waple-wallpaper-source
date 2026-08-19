// Function: FUN_1404b9360
// Addr: 1404b9360
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9360(char param_1)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  func_0x00015d6c93af();
  cRam000000001921004a = cRam000000001921004a + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

