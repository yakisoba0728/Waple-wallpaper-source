// Function: FUN_1404c9180
// Addr: 1404c9180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9180(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  undefined6 uVar4;
  char *unaff_RSI;
  char unaff_R12B;
  bool in_SF;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)((ulonglong)param_2 >> 8);
  if (!in_SF) {
    *param_1 = *param_1 + unaff_R12B;
    *unaff_RSI = *unaff_RSI + in_AL;
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + cVar3;
  cVar3 = cVar3 + *param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  cVar2 = (in_AL ^ *(byte *)CONCAT71(in_register_00000001,in_AL)) + 0x90;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,(char)param_2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,(char)param_2)) + (char)param_1;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  cVar3 = in(4);
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

