// Function: FUN_1404a8ea8
// Addr: 1404a8ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8ea8(byte *param_1)

{
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  
  uRam00000001044f8eb8 = uRam00000001044f8eb8 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  *param_1 = *param_1 ^ in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

