// Function: FUN_1404b716c
// Addr: 1404b716c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b716c(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0x50) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x50) + (in_AL | 0x50);
  iRam0000000141707179 = iRam0000000141707179 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

