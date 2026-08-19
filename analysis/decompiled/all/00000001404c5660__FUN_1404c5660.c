// Function: FUN_1404c5660
// Addr: 1404c5660
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5660(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined6 uVar9;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  byte *pbVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)param_2;
  bVar6 = (byte)param_1;
  uVar4 = in_EAX | 0x6001e01;
  cVar3 = (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar3;
  *unaff_RSI = *unaff_RSI >> 1;
  cVar3 = (char)uVar4 + cVar3;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3);
  pbVar5 = (byte *)(ulonglong)uVar4;
  *pbVar5 = *pbVar5 + cVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  *(int *)((longlong)pbVar5 * 2) =
       (*(int *)((longlong)pbVar5 * 2) - uVar4) - (uint)CARRY1(bVar1,unaff_BL);
  bVar8 = (byte)((ulonglong)param_2 >> 8) |
          param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))];
  bVar1 = *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7));
  cVar2 = *(char *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7)) + bVar6;
  if (!CARRY1(bVar1,bVar6)) {
    if (SCARRY1(cVar2,bVar6)) goto code_r0x0001404c569d;
    *unaff_RSI = *unaff_RSI >> 1;
    *pbVar5 = *pbVar5 + unaff_BH;
  }
  *pbVar5 = *pbVar5 + cVar3;
  *param_1 = *param_1 + unaff_BL;
  *pbVar5 = *pbVar5 & bVar6;
  bVar1 = *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,bVar7)) + bVar7;
  if (!CARRY1(bVar1,bVar7)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar5 = *pbVar5 + bVar8;
code_r0x0001404c569d:
  *pbVar5 = *pbVar5 + cVar3;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

