// Function: FUN_1404b986c
// Addr: 1404b986c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b986c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte bVar6;
  undefined8 in_RAX;
  undefined6 uVar7;
  byte bVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int *piVar5;
  
  bVar8 = (byte)param_2;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar2 = (char)in_RAX;
  bVar3 = bVar6 * '\x02';
  piVar5 = (int *)CONCAT62(uVar7,CONCAT11(bVar3,cVar2));
  *piVar5 = *piVar5 + (int)piVar5 + (uint)CARRY1(bVar6,bVar6);
  bVar6 = bVar3 + bVar8;
  bVar3 = cVar2 + *(char *)CONCAT62(uVar7,CONCAT11(bVar6,cVar2)) + CARRY1(bVar3,bVar8);
  piVar5 = (int *)CONCAT62(uVar7,CONCAT11(bVar6 + bVar3,bVar3));
  uVar4 = (int)piVar5 + *piVar5 + (uint)CARRY1(bVar6,bVar3);
  pcVar1 = (char *)((ulonglong)uVar4 + unaff_RBX);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  *(char *)(unaff_RDI + param_2) = *(char *)(unaff_RDI + param_2) + bVar8;
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((ulonglong)uVar4 + 0x4f);
  *pcVar1 = *pcVar1 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

