// Function: FUN_1404b5988
// Addr: 1404b5988
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5988(void)

{
  uint *puVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  undefined2 *unaff_RDI;
  
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + -0x77d3fff2);
  *puVar1 = *puVar1 ^ unaff_EBX;
  TaskRegister(*unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

