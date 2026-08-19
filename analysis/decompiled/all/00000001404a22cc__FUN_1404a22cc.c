// Function: FUN_1404a22cc
// Addr: 1404a22cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a22cc(uint param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar7;
  undefined8 in_RAX;
  undefined8 uVar5;
  longlong unaff_RSI;
  uint *unaff_RDI;
  undefined1 auStack_8 [8];
  int *piVar4;
  byte *pbVar6;
  byte bVar8;
  
  bVar2 = (byte)in_RAX;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  cVar7 = bVar8 + bVar2;
  piVar4 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar7,bVar2));
  *piVar4 = *piVar4 + (int)piVar4 + (uint)CARRY1(bVar8,bVar2);
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + cVar7;
  uVar5 = CONCAT71((int7)((ulonglong)piVar4 >> 8),uRama80004cefe0004ce);
  *param_2 = *param_2 & param_1;
  *param_2 = *param_2 + param_1;
  uVar3 = (int)uVar5 + 0x6420a00;
  pbVar6 = (byte *)(ulonglong)uVar3;
  pbVar1 = pbVar6 + unaff_RSI * 2;
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
  bVar2 = (byte)uVar3;
  *pbVar6 = *pbVar6 + bVar2;
  *unaff_RDI = *unaff_RDI & (uint)auStack_8;
  *pbVar6 = *pbVar6 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

