// Function: FUN_1404c9fb4
// Addr: 1404c9fb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9fb4(undefined8 param_1)

{
  char cVar1;
  char unaff_BH;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  cRamffffffffed007f2b = cRamffffffffed007f2b + cVar1;
  cRam0000000021004c9e = cRam0000000021004c9e + '<';
  cRamffffffffc9007f2a = cRamffffffffc9007f2a + -0x62;
  cRam000000004200993c = cRam000000004200993c + unaff_BH + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

