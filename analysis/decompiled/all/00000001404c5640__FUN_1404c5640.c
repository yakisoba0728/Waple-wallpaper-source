// Function: FUN_1404c5640
// Addr: 1404c5640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5640(char *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 in_AL;
  byte in_AH;
  char cVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESP;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte in_CF;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)param_2;
  bVar1 = in_AH + *(byte *)(param_2 + unaff_RBP);
  cVar2 = bVar1 + in_CF;
  cVar4 = (char)((ulonglong)param_2 >> 8) + param_1[unaff_RBP] +
          (CARRY1(in_AH,*(byte *)(param_2 + unaff_RBP)) || CARRY1(bVar1,in_CF));
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + cVar3;
  *(int *)unaff_RSI = *(int *)unaff_RSI + unaff_ESP;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + cVar2;
  *unaff_RSI = *unaff_RSI >> 1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       + cVar2;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL));
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

