// Function: FUN_14049f3e4
// Addr: 14049f3e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f3e4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  longlong in_RAX;
  char unaff_BL;
  
  pbVar1 = (byte *)(param_1 + in_RAX);
  *pbVar1 = *pbVar1 ^ 0xcf;
  if (*pbVar1 == 0) {
    *param_4 = *param_4 + (char)in_RAX;
  }
  *param_4 = *param_4 + (char)in_RAX + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

