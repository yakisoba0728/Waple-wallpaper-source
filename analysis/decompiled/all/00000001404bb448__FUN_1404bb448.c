// Function: FUN_1404bb448
// Addr: 1404bb448
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb448(byte *param_1,byte *param_2)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  
  *param_1 = *param_1 << 1 | in_CF;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar2 = in_AL + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  bVar2 = bVar2 | param_2[in_FS_OFFSET];
  *param_1 = *param_1 << 1;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | bVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + (char)param_1;
  bVar2 = bVar2 | param_2[in_FS_OFFSET];
  *(char *)(unaff_RSI + 0x21) = *(char *)(unaff_RSI + 0x21) + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(longlong *)(unaff_RSI + -8) = unaff_RSI;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

