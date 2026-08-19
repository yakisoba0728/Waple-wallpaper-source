// Function: FUN_1404cb824
// Addr: 1404cb824
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb824(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + 0x21004c) =
       *(byte *)(unaff_RDI + 0x21004c) & (byte)((ulonglong)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

