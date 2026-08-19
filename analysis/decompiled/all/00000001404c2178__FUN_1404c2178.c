// Function: FUN_1404c2178
// Addr: 1404c2178
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2178(char *param_1,char *param_2)

{
  byte *pbVar1;
  undefined7 in_register_00000001;
  byte bVar2;
  char unaff_R13B;
  
  bVar2 = (byte)param_1;
  *param_2 = *param_2 + unaff_R13B;
  *(char *)CONCAT71(in_register_00000001,0x20) = *(char *)CONCAT71(in_register_00000001,0x20) + ' ';
  *param_1 = *param_1 - bVar2;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,0x20) + -0x47 +
                   CONCAT71(in_register_00000001,0x20));
  *pbVar1 = *pbVar1 & bVar2;
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,0x20) + 4 + CONCAT71(in_register_00000001,0x20));
  *pbVar1 = *pbVar1 & bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

