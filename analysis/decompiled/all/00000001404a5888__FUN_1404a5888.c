// Function: FUN_1404a5888
// Addr: 1404a5888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5888(ulonglong param_1,int *param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar1;
  uint *unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  bVar1 = (byte)(param_1 >> 8);
  *(byte *)(unaff_RBP + 8) = *(byte *)(unaff_RBP + 8) ^ bVar1;
  *(char *)((longlong)unaff_RBX + 0x6d) = *(char *)((longlong)unaff_RBX + 0x6d) + bVar1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  *(byte *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AL;
  *unaff_RBX = *unaff_RBX & (uint)param_1 & 0xffffff49;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AH;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AH;
  *param_2 = *param_2 + (int)param_2;
  cRam00000001522a6c95 = cRam00000001522a6c95 + (char)param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x1c) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x1c) + (in_AL ^ 0x1c);
  *(uint *)unaff_RDI = *(int *)unaff_RDI + ((uint)param_1 & 0xffffff49);
  *(undefined1 *)unaff_RBX = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

