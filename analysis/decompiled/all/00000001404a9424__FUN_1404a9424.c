// Function: FUN_1404a9424
// Addr: 1404a9424
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9424(char *param_1,char param_2)

{
  char *pcVar1;
  ulonglong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI & 0xffffffff);
  if ('\0' < (char)pcVar1) {
    *param_1 = *param_1 + param_2;
    *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

