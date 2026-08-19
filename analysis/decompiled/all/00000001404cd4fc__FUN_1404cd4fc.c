// Function: FUN_1404cd4fc
// Addr: 1404cd4fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd4fc(byte param_1)

{
  uint *puVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0x21 +
                   CONCAT71(in_register_00000001,in_AL));
  *puVar1 = *puVar1 >> (param_1 & 0x1f) | *puVar1 << 0x20 - (param_1 & 0x1f);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

