// Function: FUN_14049f838
// Addr: 14049f838
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f838(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)param_4 >> 8);
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar2 = *pcVar2 + in_AH;
  *(byte *)(unaff_RDI + param_2) = *(byte *)(unaff_RDI + param_2) | (byte)param_2;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
           0xb1) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
               | 0xb1) + (CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0xb1);
  pcVar2 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0xb1) - 9);
  *pcVar2 = *pcVar2 + unaff_BL;
  *(char *)CONCAT71(uVar3,1) = *(char *)CONCAT71(uVar3,1) + unaff_SPL;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
           0xb1) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                | 0xb1) + (in_AL | 0xb1);
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
           0xb1) =
       *(int *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
               | 0xb1) + (CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0xb1);
  pcVar2 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0xb1) - 9);
  *pcVar2 = *pcVar2 + unaff_BL;
  *(char *)CONCAT71(uVar3,1) = *(char *)CONCAT71(uVar3,1) + unaff_SPL;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) |
           0xb1) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
                | 0xb1) + (in_AL | 0xb1);
  *(char *)(param_1 + unaff_RSI) = (char)param_1[unaff_RSI] + (char)param_1;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,1));
  out((short)param_2,CONCAT22(in_register_00000002,CONCAT11(in_AH,1)));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1))) +
       (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1)))
                   + -0x4f10ffff);
  *pbVar1 = *pbVar1 ^ 1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,1))) +
       (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + CONCAT22(in_register_00000002,CONCAT11(in_AH,1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

