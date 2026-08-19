// Function: FUN_1404ba484
// Addr: 1404ba484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba484(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x48a4ffe0) =
       *(byte *)(unaff_RDI + -0x48a4ffe0) & (byte)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & in_AL;
  if (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) != '\0') {
    in(0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

