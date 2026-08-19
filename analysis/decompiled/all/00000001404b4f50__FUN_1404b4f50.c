// Function: FUN_1404b4f50
// Addr: 1404b4f50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4f50(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  pcVar1 = (char *)((CONCAT71(in_register_00000001,in_AL) ^ 0x1a) + 0x54001a34);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

