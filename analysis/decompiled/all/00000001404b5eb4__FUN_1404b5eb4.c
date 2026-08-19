// Function: FUN_1404b5eb4
// Addr: 1404b5eb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5eb4(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + 0x34);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  *param_4 = *param_4 + (((char)in_RAX - (char)*in_RAX) - CARRY1(bVar2,param_1));
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

