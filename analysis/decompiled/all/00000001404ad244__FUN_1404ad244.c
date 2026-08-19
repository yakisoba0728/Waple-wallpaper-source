// Function: FUN_1404ad244
// Addr: 1404ad244
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad244(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + -0x7066ffef) = *(byte *)(unaff_RDI + -0x7066ffef) | 0x11;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0xb);
  *pcVar1 = *pcVar1 + param_2;
  *param_4 = *param_4 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

