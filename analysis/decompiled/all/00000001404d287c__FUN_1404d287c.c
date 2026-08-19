// Function: FUN_1404d287c
// Addr: 1404d287c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d28bf) */

void FUN_1404d287c(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x2004d27);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

