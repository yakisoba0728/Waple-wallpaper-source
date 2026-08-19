// Function: FUN_1404cb7b4
// Addr: 1404cb7b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb7b4(undefined8 param_1,undefined8 param_2)

{
  cRam0000000021004cb6 = cRam0000000021004cb6 + -0x4a;
  cRam0000000021004cd8 = cRam0000000021004cd8 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

