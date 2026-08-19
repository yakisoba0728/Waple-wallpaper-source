// Function: FUN_1404d1388
// Addr: 1404d1388
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1388(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  byte bVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  int *piVar5;
  
  bVar6 = (byte)param_2;
  uVar4 = (in_EAX + -0x9000788) - (uint)in_CF;
  *(int *)((ulonglong)uVar4 * 2) = *(int *)((ulonglong)uVar4 * 2) + (uint)param_2;
  cVar3 = (char)uVar4;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + cVar3,cVar3));
  piVar5 = (int *)(ulonglong)uVar4;
  *(char *)piVar5 = (char)*piVar5 + cVar3;
  *(uint *)(&stack0x00000000 + (longlong)piVar5) =
       *(uint *)(&stack0x00000000 + (longlong)piVar5) & (uint)param_2;
  pbVar1 = &stack0x00000000 + unaff_RSI * 8;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  *piVar5 = (*piVar5 - uVar4) - (uint)CARRY1(bVar2,bVar6);
  param_2[unaff_RDI] = param_2[unaff_RDI] | bVar6;
  in((short)param_2);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *param_2 = *param_2 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

