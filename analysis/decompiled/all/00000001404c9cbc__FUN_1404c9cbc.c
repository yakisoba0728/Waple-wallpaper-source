// Function: FUN_1404c9cbc
// Addr: 1404c9cbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9cbc(ulonglong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar4;
  char cVar5;
  char unaff_BL;
  longlong unaff_RSI;
  int *unaff_RDI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  pbVar4 = (byte *)(param_1 & 0xffffffffffffff49);
  *pbVar4 = *pbVar4 + in_AH;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + in_AL;
  pbVar4[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))] =
       pbVar4[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))] +
       in_AH;
  pcVar1 = (char *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + cVar5;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + cVar5;
  bVar2 = in_AL ^ 0x4e ^
          *(byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 0x4e);
  *pbVar4 = *pbVar4 + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + bVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2)))
       + cVar5;
  bVar3 = bVar2 ^ 0x4e ^
          *(byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar2))) ^ 0x4e);
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar3;
  *unaff_RDI = (*unaff_RDI - CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) -
               (uint)CARRY1(bVar2,bVar3);
  *pbVar4 = *pbVar4 + unaff_BL;
  if (pbVar4 == (byte *)0x1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

