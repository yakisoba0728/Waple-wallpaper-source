// Function: FUN_1404d0fe8
// Addr: 1404d0fe8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0fe8(undefined8 param_1)

{
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 0xd) = *(int *)(unaff_RDI + 0xd) + (int)&stack0xfffffffffffffff8;
  *(char *)(unaff_RDI + -0x1c) = *(char *)(unaff_RDI + -0x1c) + (char)((ulonglong)param_1 >> 8);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

