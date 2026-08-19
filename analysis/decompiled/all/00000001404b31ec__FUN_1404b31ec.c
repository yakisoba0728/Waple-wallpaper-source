// Function: FUN_1404b31ec
// Addr: 1404b31ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b31ec(uint param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte in_AL;
  char cVar4;
  byte in_AH;
  byte bVar5;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar6;
  uint *unaff_RBX;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  
  puVar1 = (uint *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *puVar1 = *puVar1 & param_1;
  cVar6 = (char)param_1;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + cVar6;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar5 = in_AH | in_AL;
  cVar4 = (in_AL | *(byte *)CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(bVar5,in_AL)))) + 100;
  LOCK();
  puVar2 = (undefined4 *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x17bcab00 + param_2);
  uVar3 = *puVar2;
  *puVar2 = unaff_EDI;
  UNLOCK();
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4)))
       + cVar6;
  *unaff_RBX = *unaff_RBX ^ param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4)))
       + cVar4;
  LOCK();
  *(undefined4 *)(CONCAT44(unaff_0000003c,uVar3) + 0x17bcab00 + param_2) = uVar3;
  UNLOCK();
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4)))
       + cVar6;
  *unaff_RBX = *unaff_RBX ^ param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar5,cVar4)))
       + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

