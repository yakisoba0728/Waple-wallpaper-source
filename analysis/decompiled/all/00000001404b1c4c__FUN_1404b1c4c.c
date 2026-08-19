// Function: FUN_1404b1c4c
// Addr: 1404b1c4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1c4c(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  byte unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) & unaff_BL
  ;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x5bffe9ba);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

