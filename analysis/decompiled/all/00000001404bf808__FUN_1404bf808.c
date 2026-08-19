// Function: FUN_1404bf808
// Addr: 1404bf808
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf808(longlong param_1,undefined2 param_2)

{
  undefined1 uVar1;
  undefined1 *unaff_RDI;
  char in_CF;
  
  uVar1 = in(CONCAT11((char)((ushort)param_2 >> 8) + *(char *)(param_1 + 0x8e40500) + in_CF,
                      (char)param_2));
  *unaff_RDI = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

