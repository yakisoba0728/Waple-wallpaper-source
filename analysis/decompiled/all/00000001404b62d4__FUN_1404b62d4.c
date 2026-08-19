// Function: FUN_1404b62d4
// Addr: 1404b62d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b62d4(char *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  uVar2 = (ushort)CARRY1(bVar1,in_AH);
  uVar3 = CONCAT11(in_AH,in_AL) - *(short *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  sVar4 = uVar3 - uVar2;
  sVar4 = (sVar4 - *(short *)CONCAT62(in_register_00000002,sVar4)) -
          (ushort)(CONCAT11(in_AH,in_AL) <
                   *(ushort *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) || uVar3 < uVar2)
  ;
  *param_1 = *param_1 + (char)((ushort)sVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)sVar4;
  *(char *)CONCAT62(in_register_00000002,sVar4) =
       *(char *)CONCAT62(in_register_00000002,sVar4) + (char)sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

