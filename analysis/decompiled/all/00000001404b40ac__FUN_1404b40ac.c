// Function: FUN_1404b40ac
// Addr: 1404b40ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b40ac(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x4762ffe8) =
       *(byte *)(unaff_RDI + -0x4762ffe8) ^ (byte)((ulonglong)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

