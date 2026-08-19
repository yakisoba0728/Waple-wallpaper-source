// Function: FUN_1404b33d8
// Addr: 1404b33d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b33d8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  bool in_OF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if (param_1 + -1 == 0 ||
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
      == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar3 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + param_1 + -1);
  *pcVar1 = *pcVar1 + cVar4;
  if (param_1 + -2 == 0 || *pcVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       | bVar3;
  cVar2 = in_AH * '\x02';
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,bVar3)))
       | bVar3;
  pcVar1 = (char *)(unaff_RBX + param_1 + -2);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)(param_1 + 0x17bf3ffe) = *(char *)(param_1 + 0x17bf3ffe) + cVar4;
  *(char *)(unaff_RBP + -0x41) = *(char *)(unaff_RBP + -0x41) + cVar2 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

