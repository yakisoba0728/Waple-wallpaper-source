// Function: FUN_1404a5710
// Addr: 1404a5710
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5710(char *param_1)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  uint *unaff_RBX;
  byte *unaff_RSI;
  undefined8 uStackX_10;
  undefined1 auStackX_18 [16];
  undefined8 in_stack_00000028;
  byte *pbVar6;
  uint *puVar7;
  
  uVar5 = in_EAX + 0x30000634;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  *pbVar6 = *pbVar6 | bVar4;
  *pbVar6 = *pbVar6 | bVar4;
  uVar1 = (undefined3)(uVar5 >> 8);
  bVar2 = bVar4 + 0xaa;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  *param_1 = *param_1 + (char)auStackX_18;
  *pbVar6 = *pbVar6 + bVar2;
  *pbVar6 = *pbVar6 + (char)((ulonglong)uStackX_10 >> 8);
  *pbVar6 = *pbVar6 | bVar2;
  *pbVar6 = *pbVar6 | bVar2;
  cVar3 = bVar4 + 0x54;
  puVar7 = (uint *)(ulonglong)CONCAT31(uVar1,cVar3);
  *param_1 = *param_1 + cVar3;
  *unaff_RBX = *unaff_RBX | CONCAT31(uVar1,cVar3);
  *param_1 = *param_1 + (char)param_1;
  *(int *)((longlong)puVar7 * 2) = *(int *)((longlong)puVar7 * 2) + (int)&stack0x00000030;
  uVar5 = *puVar7;
  *(char *)puVar7 = (char)*puVar7 + cVar3;
  *puVar7 = *puVar7 & (uint)param_1;
  bVar4 = cVar3 + (char)*puVar7;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar1,bVar4);
  *unaff_RSI = *unaff_RSI | (char)((ulonglong)in_stack_00000028 >> 8) + (char)uVar5;
  pbVar6[(longlong)param_1] = pbVar6[(longlong)param_1];
  *pbVar6 = *pbVar6 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

