// Function: FUN_1404d36ec
// Addr: 1404d36ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d36ec(undefined8 param_1)

{
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + -0x54beffc1) =
       *(byte *)(unaff_RBX + -0x54beffc1) ^ (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

