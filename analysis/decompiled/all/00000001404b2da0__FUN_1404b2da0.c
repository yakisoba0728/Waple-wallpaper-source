// Function: FUN_1404b2da0
// Addr: 1404b2da0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2da0(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  uint *unaff_RDI;
  
  *(byte *)(param_2 + 0x5002d004) = *(byte *)(param_2 + 0x5002d004) | in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *unaff_RDI = *unaff_RDI & (uint)param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

