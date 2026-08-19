// Function: FUN_1404ce3f0
// Addr: 1404ce3f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce3f0(longlong param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  char *unaff_RSI;
  char unaff_DIL;
  undefined7 unaff_00000039;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = (char)param_1;
  *param_2 = *param_2 + cVar2;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + unaff_DIL;
  cVar3 = (char)((ulonglong)param_1 >> 8) + *unaff_RSI;
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  cVar3 = cVar3 + *unaff_RSI;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + (char)param_2;
  *(char *)CONCAT71(unaff_00000039,unaff_DIL) = *(char *)CONCAT71(unaff_00000039,unaff_DIL) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

