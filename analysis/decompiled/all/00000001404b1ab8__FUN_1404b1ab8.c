// Function: FUN_1404b1ab8
// Addr: 1404b1ab8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1ab8(void)

{
  byte *pbVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint *unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 7);
  *pbVar1 = *pbVar1 | in_AH;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) ^ in_AL;
  *unaff_RDI = *unaff_RDI & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

