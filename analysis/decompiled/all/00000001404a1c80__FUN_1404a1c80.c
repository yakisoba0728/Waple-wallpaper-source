// Function: FUN_1404a1c80
// Addr: 1404a1c80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1c80(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  char unaff_BL;
  uint unaff_EBP;
  int *unaff_RSI;
  byte *unaff_RDI;
  uint auStack_10 [2];
  undefined8 uStack_8;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar4 = in_EAX | 0x9e00bf0;
  pcVar5 = (char *)(ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar6 = (char)param_2 + pcVar5[0x21];
  bVar3 = (byte)uVar4;
  *(byte *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) =
       *(byte *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) | bVar3;
  *pcVar5 = *pcVar5 + (char)param_1;
  uStack_8 = 0x6870001e;
  pcVar5 = (char *)(ulonglong)uVar4;
  *(uint *)((longlong)&uStack_8 + (longlong)pcVar5) =
       *(uint *)((longlong)&uStack_8 + (longlong)pcVar5) | unaff_EBP;
  *param_1 = *param_1 + (char)&uStack_8;
  *pcVar5 = *pcVar5 + bVar3;
  pcVar5[0x68] = pcVar5[0x68] + cVar7;
  pcVar5 = (char *)(ulonglong)uVar4;
  *(uint *)((longlong)&uStack_8 + (longlong)pcVar5) =
       *(uint *)((longlong)&uStack_8 + (longlong)pcVar5) | unaff_EBP;
  *param_1 = *param_1 + (char)&uStack_8;
  *(byte *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) + bVar3;
  *pcVar5 = *pcVar5 + bVar3;
  auStack_10[0] = 0x6870001e;
  auStack_10[1] = 0;
  *(uint *)((longlong)auStack_10 + (ulonglong)uVar4) =
       *(uint *)((longlong)auStack_10 + (ulonglong)uVar4) | unaff_EBP;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  bVar2 = *param_1;
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) + unaff_BL;
  *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) =
       *(char *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(cVar7,cVar6))) + unaff_BL;
  *unaff_RSI = *unaff_RSI + CONCAT22(uVar8,CONCAT11(cVar7,cVar6));
  *(byte *)unaff_RSI = (char)*unaff_RSI + (((char)param_1 - bVar2) - CARRY1(bVar1,bVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

