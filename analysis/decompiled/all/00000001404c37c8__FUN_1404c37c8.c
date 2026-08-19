// Function: FUN_1404c37c8
// Addr: 1404c37c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c37c8(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI * 9 + 0x210049);
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(unaff_RDI * 9 + 0xf010049);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

