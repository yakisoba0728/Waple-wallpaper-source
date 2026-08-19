// Function: FUN_1404d4a24
// Addr: 1404d4a24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4a24(undefined8 param_1,char param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte unaff_R12B;
  
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  (&stack0x00000000)
  [CONCAT71(in_register_00000001,(in_AL ^ 0x49) + 8 + CARRY1(bVar1,unaff_R12B)) * 8] =
       (&stack0x00000000)
       [CONCAT71(in_register_00000001,(in_AL ^ 0x49) + 8 + CARRY1(bVar1,unaff_R12B)) * 8] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

