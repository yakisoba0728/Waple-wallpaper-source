// Function: FUN_1404c4de0
// Addr: 1404c4de0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4de0(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char *pcVar4;
  uint uVar5;
  byte bVar6;
  int unaff_EBX;
  byte *unaff_RSI;
  
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_EBX;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  pbVar1 = unaff_RSI + param_1;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - (byte)param_2;
  (&stack0x00000000)[param_1] =
       ((&stack0x00000000)[param_1] - (char)((uint)param_2 >> 8)) - (bVar2 < (byte)param_2);
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar6 = (byte)unaff_EBX;
  cVar3 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + bVar6;
  if ((!CARRY1(bVar2,bVar6)) &&
     (pcVar4 = (char *)(param_1 + -1),
     pcVar4 == (char *)0x0 || *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) == '\0')
     ) {
    if (!SCARRY1(cVar3,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = param_2 + *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 2);
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AH;
    *unaff_RSI = *unaff_RSI >> 1;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)(uVar5 >> 8);
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    *pcVar4 = *pcVar4 + in_AL;
    TaskRegister(*(undefined2 *)(&stack0x00000000 + (ulonglong)uVar5 * 2));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

