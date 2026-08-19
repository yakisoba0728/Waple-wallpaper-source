// Function: FUN_1404d1db8
// Addr: 1404d1db8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1db8(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int unaff_EDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & (uint)param_1;
  bVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pbVar1 = (byte *)(unaff_RBP + (longlong)param_2 * 8);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 >> 1;
  bVar3 = (byte)param_1;
  bVar2 = (bVar2 + bVar3 + -0x4d) - CARRY1(bVar2,bVar3);
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  iRam000000017d67d4d7 = (iRam000000017d67d4d7 - unaff_EDI) - (uint)CARRY1(bVar2,(byte)param_2);
  *param_1 = *param_1 + unaff_BL;
  *param_2 = *param_2 + (byte)param_2;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

