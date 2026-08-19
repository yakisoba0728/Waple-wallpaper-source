// Function: FUN_1404c281c
// Addr: 1404c281c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c281c(undefined8 param_1,char *param_2,char *param_3)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char cVar2;
  undefined6 uVar3;
  char unaff_BL;
  longlong unaff_RSI;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,3)) = *(char *)CONCAT62(uVar3,CONCAT11(cVar2,3)) + cVar2;
  cVar1 = in_AL + *param_2 + *param_3;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,3)) = *(char *)CONCAT62(uVar3,CONCAT11(cVar2,3)) + unaff_BL
  ;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

