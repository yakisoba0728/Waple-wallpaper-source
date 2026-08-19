// Function: FUN_1404b290c
// Addr: 1404b290c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b290c(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar5;
  undefined7 uVar6;
  byte unaff_BL;
  int unaff_ESI;
  
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  iVar4 = *(int *)CONCAT71(in_register_00000001,in_AL);
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 1);
  cVar5 = (byte)param_2 + *pbVar1;
  *(uint *)CONCAT71(uVar6,cVar5) =
       (*(int *)CONCAT71(uVar6,cVar5) - (int)param_1) - (uint)CARRY1((byte)param_2,*pbVar1);
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  piVar2 = (int *)(CONCAT71(uVar6,cVar5) + CONCAT71(uVar6,cVar5));
  *piVar2 = (*piVar2 - (unaff_ESI + iVar4)) - (uint)CARRY1(in_AL,CARRY1(bVar3,unaff_BL));
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

