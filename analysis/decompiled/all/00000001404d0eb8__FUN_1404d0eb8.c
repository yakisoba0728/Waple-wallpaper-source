// Function: FUN_1404d0eb8
// Addr: 1404d0eb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0eb8(byte param_1,undefined8 param_2,char param_3,char *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RDI;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_4 = *param_4 + param_3;
  *unaff_RDI = *unaff_RDI + param_1;
  bRam00000000c059003a =
       bRam00000000c059003a >> (param_1 & 7) | bRam00000000c059003a << 8 - (param_1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

