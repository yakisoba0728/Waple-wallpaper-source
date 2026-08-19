// Function: FUN_1404c9e98
// Addr: 1404c9e98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9ed4) overlaps instruction at (ram,0x0001404c9ed2)
    */

void FUN_1404c9e98(char *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte in_AL;
  byte bVar4;
  char in_AH;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar6;
  undefined1 unaff_BL;
  undefined1 uVar7;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = in_AH * '\x02';
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL)))
       | in_AL;
  cVar5 = cVar5 + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL));
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + cVar6;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar5;
  unaff_RSI[(longlong)param_1] = unaff_RSI[(longlong)param_1] + cVar6;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL))) + 0x58);
  *pcVar1 = *pcVar1 + cVar5;
  bVar4 = in_AL ^ *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar5,in_AL)));
  LOCK();
  puVar2 = (undefined1 *)
           (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) +
           0x32);
  uVar7 = *puVar2;
  *puVar2 = unaff_BL;
  UNLOCK();
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)))
       + cVar5;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)))
       + bVar4;
  bVar4 = in(8);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)))
       + bVar4;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)))
      == '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))
                          ) & CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4));
    bVar4 = bVar4 + *(char *)CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)));
    unaff_RSI[(longlong)param_1] = unaff_RSI[(longlong)param_1] + cVar6;
  }
  else {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))
                          ) + bVar4;
    pcVar1 = (char *)((CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) ^ 0xe) + 0x58)
    ;
    *pcVar1 = *pcVar1 + cVar5;
    bVar4 = bVar4 ^ 0xe ^
            *(byte *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) ^ 0xe);
    LOCK();
    puVar2 = (undefined1 *)
             (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) +
             0x32);
    uVar3 = *puVar2;
    *puVar2 = uVar7;
    UNLOCK();
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))
                          ) + cVar5;
    *param_1 = *param_1 + unaff_R12B;
    *param_2 = *param_2 + bVar4;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))
                          ) + bVar4;
    bVar4 = bVar4 ^ 0xe;
    uVar7 = uVar3;
  }
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) + 0x58);
  *pcVar1 = *pcVar1 + cVar5;
  bVar4 = bVar4 ^ *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)));
  LOCK();
  puVar2 = (undefined1 *)
           (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) +
           0x32);
  uVar3 = *puVar2;
  *puVar2 = uVar7;
  UNLOCK();
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)))
       + cVar5;
  *param_1 = *param_1 + param_3;
  *(char *)CONCAT71(unaff_00000019,uVar3) = *(char *)CONCAT71(unaff_00000019,uVar3) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

