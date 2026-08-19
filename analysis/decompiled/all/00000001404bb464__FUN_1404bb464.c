// Function: FUN_1404bb464
// Addr: 1404bb464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb464(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char in_AL;
  byte bVar4;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar4 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pbVar1 = param_2 + 2 + (longlong)param_1;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  *param_1 = *param_1 << 1 | CARRY1(bVar3,in_AH);
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RSI * 4);
  *pcVar2 = *pcVar2 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | bVar4;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       + (char)param_1;
  bVar4 = bVar4 | param_2[in_FS_OFFSET];
  *(char *)(unaff_RSI + 0x21) = *(char *)(unaff_RSI + 0x21) + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4));
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       + bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       + bVar4;
  *(longlong *)(unaff_RSI + -8) = unaff_RSI;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

