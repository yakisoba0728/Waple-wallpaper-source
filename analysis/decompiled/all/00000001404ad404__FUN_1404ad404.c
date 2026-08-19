// Function: FUN_1404ad404
// Addr: 1404ad404
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad404(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar8;
  undefined8 in_RAX;
  char *pcVar5;
  int *piVar6;
  longlong unaff_RSI;
  char cVar7;
  undefined6 uVar9;
  
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar3 = (char)in_RAX;
  cVar7 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8);
  pcVar5 = (char *)CONCAT62(uVar9,CONCAT11(cVar7,cVar3));
  *pcVar5 = *pcVar5 - cVar3;
  cVar7 = cVar7 * '\x02';
  piVar6 = (int *)CONCAT62(uVar9,CONCAT11(cVar7,cVar3));
  *piVar6 = *piVar6 - (int)piVar6;
  cVar7 = cVar7 + (char)param_2;
  cVar3 = cVar3 - *(char *)CONCAT62(uVar9,CONCAT11(cVar7,cVar3));
  piVar6 = (int *)CONCAT62(uVar9,CONCAT11(cVar7 + cVar3,cVar3));
  uVar4 = (int)piVar6 - *piVar6;
  pbVar1 = (byte *)((ulonglong)uVar4 + unaff_RSI);
  bVar2 = *pbVar1;
  bVar8 = (byte)(uVar4 >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  piVar6 = (int *)CONCAT71((uint7)(uint3)(uVar4 >> 8),0xb0);
  *piVar6 = *piVar6 + (int)piVar6 + (uint)CARRY1(bVar2,bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

