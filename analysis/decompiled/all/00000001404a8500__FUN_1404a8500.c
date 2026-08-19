// Function: FUN_1404a8500
// Addr: 1404a8500
// Size: 1 bytes


void FUN_1404a8500(void)

{
  char *pcVar1;
  ulonglong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI & 0xffffffff ^ 0x13);
  *pcVar1 = *pcVar1 + (char)((unaff_RDI & 0xffffffff) >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

