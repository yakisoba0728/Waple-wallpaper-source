// Function: FUN_1404a7cec
// Addr: 1404a7cec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a7d0f) overlaps instruction at (ram,0x0001404a7d0e)
    */

void FUN_1404a7cec(byte *param_1,uint *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pbVar2 = param_1 + (longlong)(param_2 + 0x2ab4480);
  *pbVar2 = *pbVar2;
  if ((POPCOUNT(*pbVar2) & 1U) != 0) {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 10 +
                     (longlong)unaff_RSI * 4);
    *pcVar1 = *pcVar1 + in_AL;
    pcVar1 = unaff_RSI + 0x3c000ab0;
    cVar4 = *pcVar1;
    *pcVar1 = *pcVar1 + in_AH;
    if (SCARRY1(cVar4,in_AH) == *pcVar1 < '\0') {
      *param_1 = *param_1 + in_AH;
      *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
           *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + in_AL;
      pcVar1 = (char *)(CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x51);
      *pcVar1 = *pcVar1 + in_AH;
      (&stack0x00000000)[unaff_RDI * 2] =
           (&stack0x00000000)[unaff_RDI * 2] + (char)((ulonglong)param_1 >> 8);
      *param_1 = *param_1;
      *(char *)param_2 = (char)*param_2 + (char)param_1;
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) =
           *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10)))
           + '\n';
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *param_1;
  *param_1 = *param_1 + in_AL;
  iRam00000001524b8e03 =
       iRam00000001524b8e03 + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (uint)CARRY1(bVar3,in_AL);
  *(char *)param_2 = (char)*param_2 + (char)param_1;
  if (param_1 == (byte *)0x1 || (char)*param_2 == '\0') {
    *unaff_RSI = *unaff_RSI;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    *param_2 = *param_2 & (uint)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)param_2 = (char)*param_2 + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

