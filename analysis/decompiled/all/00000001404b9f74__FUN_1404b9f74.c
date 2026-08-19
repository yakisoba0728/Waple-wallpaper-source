// Function: FUN_1404b9f74
// Addr: 1404b9f74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9f74(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) & in_AL;
  cRam000000014f4be486 = cRam000000014f4be486 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

