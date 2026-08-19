// Function: FUN_1404d3328
// Addr: 1404d3328
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3328(undefined4 param_1,uint *param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  byte *unaff_RBP;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + unaff_BH;
  *param_2 = *param_2 & CONCAT31((int3)((uint)param_1 >> 8),(byte)param_1 ^ *unaff_RBP);
  cRam000000014f4d39a5 = cRam000000014f4d39a5 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

