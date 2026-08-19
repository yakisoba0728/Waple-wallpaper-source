// Function: FUN_1404aced4
// Addr: 1404aced4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aced4(undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  *param_1 = *param_1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AH;
  uVar3 = (uint)CARRY1(bVar1,in_AH);
  uVar2 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  uVar4 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       uVar4 + uVar3;
  uRam01004acda8001100 = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       - (char)param_1) -
       (CARRY4(uVar2,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) || CARRY4(uVar4,uVar3));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + unaff_BL;
  *(int *)(unaff_RBP + 0xfe0120) =
       *(int *)(unaff_RBP + 0xfe0120) + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  puVar6 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar5 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar6 = puVar6 + -1;
    *puVar6 = *unaff_RBP;
    cVar5 = cVar5 + -1;
  } while ('\0' < cVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

