// Function: FUN_1404a8df4
// Addr: 1404a8df4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a8e0e) */
/* WARNING: Removing unreachable block (ram,0x0001404a8e10) */

void FUN_1404a8df4(longlong param_1)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  uint *unaff_RDI;
  
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + param_1);
  *pcVar1 = *pcVar1;
  if (*pcVar1 == '\0') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *unaff_RDI = *unaff_RDI & unaff_ESP;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

