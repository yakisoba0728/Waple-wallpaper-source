// Function: FUN_1404c42ac
// Addr: 1404c42ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c42ac(int param_1)

{
  byte bVar1;
  byte *unaff_RSI;
  int *unaff_RDI;
  
  bVar1 = (byte)param_1 & 7;
  *unaff_RSI = *unaff_RSI << bVar1 | *unaff_RSI >> 8 - bVar1;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

