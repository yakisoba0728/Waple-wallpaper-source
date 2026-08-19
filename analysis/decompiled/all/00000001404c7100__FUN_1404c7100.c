// Function: FUN_1404c7100
// Addr: 1404c7100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7100(undefined8 param_1,undefined4 param_2)

{
  char in_AL;
  byte in_AH;
  byte bVar1;
  undefined6 in_register_00000002;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  
  bVar1 = in_AH | *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 9);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar1,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar1,in_AL)) | (byte)((uint)param_2 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar1,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar1,in_AL)) + in_AL;
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + unaff_EBX;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

