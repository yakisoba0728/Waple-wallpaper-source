// Function: FUN_1404b2fc0
// Addr: 1404b2fc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2fc0(void)

{
  char *pcVar1;
  int in_EAX;
  undefined7 unaff_00000019;
  uint unaff_ESP;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,0x17) + 0x80017b3);
  *pcVar1 = *pcVar1 + (char)((uint)(in_EAX + 0x70000e54) >> 8);
  *(uint *)CONCAT71(unaff_00000019,0x17) = *(uint *)CONCAT71(unaff_00000019,0x17) & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

