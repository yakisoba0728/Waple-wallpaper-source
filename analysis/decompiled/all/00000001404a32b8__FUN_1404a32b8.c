// Function: FUN_1404a32b8
// Addr: 1404a32b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a32b8(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  undefined1 auStack_8 [8];
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  cVar6 = (char)((ulonglong)param_2 >> 8) * '\x02';
  uVar3 = in_EAX + 0x5e6fb00;
  pbVar4 = (byte *)((ulonglong)uVar3 + 0x1004a31);
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + unaff_BH;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),((char)uVar3 - *unaff_RSI) - CARRY1(bVar2,unaff_BH));
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) + unaff_BL;
  if (-1 < *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5))) {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  }
  cVar6 = cVar6 + (char)*(int *)(ulonglong)uVar3;
  *(int *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) =
       *(int *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) + (int)auStack_8;
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = *pbVar4;
  *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(cVar6,uVar5)) + (char)uVar3;
  *pbVar4 = *pbVar4 + (char)uVar3;
  *(int *)(pbVar4 + -0x777ffea) =
       *(int *)(pbVar4 + -0x777ffea) +
       CONCAT22((short)((uint)param_1 >> 0x10),
                CONCAT11((byte)((uint)param_1 >> 8) & bVar2,(char)param_1));
  pcVar1 = (char *)((ulonglong)(uVar3 | 0xee88000) - 0x28);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

