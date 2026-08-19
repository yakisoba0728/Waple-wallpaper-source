// Function: FUN_1404ad8e8
// Addr: 1404ad8e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad8e8(int *param_1,char param_2)

{
  uint *puVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  uint unaff_EDI;
  
  *param_1 = *param_1 + unaff_ESP;
  puVar1 = (uint *)(CONCAT71(in_register_00000001,
                             in_AL | *(byte *)CONCAT71(in_register_00000001,in_AL)) + 6);
  *puVar1 = *puVar1 & unaff_EDI;
  cRam00000001494ae9f6 = cRam00000001494ae9f6 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

