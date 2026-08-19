// Function: FUN_1404baad8
// Addr: 1404baad8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baad8(void)

{
  byte in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  
  bVar1 = in_AL + 0x74;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + bVar1 + (0x8b < in_AL);
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) & bVar1;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

