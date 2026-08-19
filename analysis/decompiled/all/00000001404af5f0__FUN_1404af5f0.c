// Function: FUN_1404af5f0
// Addr: 1404af5f0
// Size: 1 bytes


void FUN_1404af5f0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + unaff_RBX);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pbVar4 = (byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + in_AH;
  *(char *)(unaff_RSI + 0x14) = *(char *)(unaff_RSI + 0x14) + (char)param_2 + CARRY1(bVar2,in_AH);
  *(char *)(unaff_RSI + 0x56) = *(char *)(unaff_RSI + 0x56) + in_AH;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

