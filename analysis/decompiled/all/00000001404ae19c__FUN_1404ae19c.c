// Function: FUN_1404ae19c
// Addr: 1404ae19c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae19c(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) | unaff_ESI;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 1);
  *pbVar1 = *pbVar1 | param_2;
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI)] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI)] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

