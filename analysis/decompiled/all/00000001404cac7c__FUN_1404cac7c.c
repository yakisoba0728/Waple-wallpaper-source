// Function: FUN_1404cac7c
// Addr: 1404cac7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cac7c(char *param_1)

{
  undefined8 in_RAX;
  char unaff_BL;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  
  *unaff_RDI = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam580033c1ca0033c1);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(unaff_RSI + 0x2a) = *(char *)(unaff_RSI + 0x2a) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

