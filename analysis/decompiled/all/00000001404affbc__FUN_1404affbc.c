// Function: FUN_1404affbc
// Addr: 1404affbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404affbc(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  byte *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RSI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  param_1[unaff_RSI] = param_1[unaff_RSI] + (char)param_2;
  cVar2 = in_AL + CARRY1(bVar3,bVar3);
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))));
  *pbVar1 = ~*pbVar1;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  uRam0000000000000000 = uRam0000000000000000 & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))
  ;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

