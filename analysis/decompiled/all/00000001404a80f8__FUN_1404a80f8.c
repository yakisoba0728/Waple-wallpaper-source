// Function: FUN_1404a80f8
// Addr: 1404a80f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a80f8(char *param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  undefined6 uVar3;
  char *unaff_RSI;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)((ulonglong)param_2 >> 8) + in_AL;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar1 = in_AL * '\x02';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
  *(byte *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_2)) =
       *(byte *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_2)) | 0x21;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
  cVar1 = in(0);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

