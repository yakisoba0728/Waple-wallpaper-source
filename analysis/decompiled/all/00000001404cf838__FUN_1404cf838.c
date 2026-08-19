// Function: FUN_1404cf838
// Addr: 1404cf838
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf838(byte *param_1,int param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte in_AL;
  char cVar4;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte unaff_BL;
  undefined7 unaff_00000019;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  iVar3 = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  out(*(undefined4 *)CONCAT44(in_register_00000004,iVar3),(short)param_2);
  bVar2 = *param_1;
  *param_1 = *param_1 + param_3;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar2,param_3);
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  cVar4 = in_AL - CARRY1(bVar2,unaff_BL);
  piVar1 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *piVar1 = (*piVar1 - (iVar3 + 4)) - (uint)(in_AL < CARRY1(bVar2,unaff_BL));
  *param_1 = *param_1 + unaff_BL;
  piVar1 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar4))
                          ));
  *piVar1 = *piVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

