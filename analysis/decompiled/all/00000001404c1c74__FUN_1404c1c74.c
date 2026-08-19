// Function: FUN_1404c1c74
// Addr: 1404c1c74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1c74(byte param_1)

{
  byte *pbVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  uint *unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,in_EAX) + 8);
  *pbVar1 = *pbVar1 | param_1;
  *unaff_RDI = *unaff_RDI & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

