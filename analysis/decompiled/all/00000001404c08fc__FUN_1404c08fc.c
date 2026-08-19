// Function: FUN_1404c08fc
// Addr: 1404c08fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c08fc(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EDI;
  
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0xf0) =
       *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0xf0) | (byte)((ulonglong)param_2 >> 8);
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0xf0) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0xf0) + (in_AL | 0xf0);
  uRam0000000138890918 = uRam0000000138890918 & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

