// Function: FUN_1404bb8cc
// Addr: 1404bb8cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb8cc(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  byte in_AH;
  char cVar3;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar4;
  undefined4 unaff_ESP;
  longlong unaff_RSI;
  char in_AF;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  cVar3 = in_AH + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))
       + in_AL + CARRY1(in_AH,in_AL);
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + cVar4;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) + -0x77);
  *pcVar1 = *pcVar1 + cVar4;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL));
  bVar2 = (*(int *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) < 0) << 7 |
          (*(int *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) == 0) << 6 |
          in_AF << 4 |
          ((POPCOUNT(*(uint *)CONCAT44(in_register_00000004,
                                       CONCAT22(in_register_00000002,CONCAT11(cVar3,in_AL))) & 0xff)
           & 1U) == 0) << 2;
  *param_1 = unaff_ESP;
  *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) |
           0x200) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
                | 0x200) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

