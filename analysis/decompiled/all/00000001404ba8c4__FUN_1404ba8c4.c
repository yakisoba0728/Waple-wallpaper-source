// Function: FUN_1404ba8c4
// Addr: 1404ba8c4
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404ba8c5) overlaps instruction at (ram,0x0001404ba8c4)
    */

void FUN_1404ba8c4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & in_AL;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0' ||
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) <
      '\0') {
    in_AH = 0xa7;
    *param_4 = *param_4;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xa7,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xa7,in_AL)))
         + in_AL;
    pcVar1 = (char *)(param_2 + 0x20 + unaff_RSI * 8);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
    *(char *)(unaff_RSI + -0xe) = *(char *)(unaff_RSI + -0xe) + unaff_BH;
  }
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & in_AL;
  pcVar3 = (code *)swi(1);
  (*pcVar3)();
  return;
}

