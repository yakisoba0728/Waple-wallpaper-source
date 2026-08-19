// Function: FUN_1404b41f0
// Addr: 1404b41f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b41f0(undefined8 param_1,byte param_2)

{
  byte bVar1;
  byte bVar3;
  char in_AL;
  byte bVar4;
  byte in_AH;
  char cVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  bool bVar6;
  char cVar2;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar4 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar6 = CARRY1(in_AH,param_2);
  cVar5 = in_AH + param_2;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)));
  cVar2 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4)));
  bVar3 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) + bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
       bVar3 + bVar6;
  if (SCARRY1(cVar2,bVar4) == SCARRY1(bVar3,bVar6)) {
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) =
         (*(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar5,bVar4))) - bVar4) -
         (CARRY1(bVar1,bVar4) || CARRY1(bVar3,bVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

