// Function: FUN_1404b3a28
// Addr: 1404b3a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3a28(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0x18);
  *pbVar1 = *pbVar1 & in_AL;
  pbVar1 = (byte *)(unaff_RDI + 0x40);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) - CARRY1(bVar2,in_AL);
  *param_1 = *param_1 + (in_AL | 0x17);
  *param_2 = *param_2 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

