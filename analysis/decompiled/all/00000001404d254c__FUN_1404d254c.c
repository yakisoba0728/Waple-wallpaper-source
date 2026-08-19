// Function: FUN_1404d254c
// Addr: 1404d254c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d254c(char *param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  undefined1 auStack_10 [16];
  
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  cVar2 = in(4);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x32ffbe96);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + 0x210049 +
                   unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,0x6a))) + 0x11110049 +
                   unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x6a))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0x6a))) |
       CONCAT22(in_register_00000002,CONCAT11(in_AH,0x6a));
  *(int *)(param_2 + 0xd) = *(int *)(param_2 + 0xd) + (int)auStack_10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

