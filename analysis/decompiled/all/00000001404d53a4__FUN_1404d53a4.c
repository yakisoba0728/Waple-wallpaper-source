// Function: FUN_1404d53a4
// Addr: 1404d53a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d53a4(void)

{
  byte in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  cVar1 = in_AL + 0x74;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) - cVar1) - (0x8b < in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

