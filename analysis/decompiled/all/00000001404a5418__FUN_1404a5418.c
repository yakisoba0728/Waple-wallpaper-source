// Function: FUN_1404a5418
// Addr: 1404a5418
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5418(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int in_EAX;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  byte *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  param_1[0x7ff6000] = param_1[0x7ff6000] + (char)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 7 + CONCAT44(unaff_0000003c,unaff_EDI) * 8)
  ;
  *pcVar2 = *pcVar2 + unaff_BH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + (char)((uint)in_EAX >> 8);
  bVar3 = *param_1;
  *param_1 = *param_1 + (byte)in_EAX;
  uVar5 = (in_EAX - (uint)CARRY1(bVar3,(byte)in_EAX)) + 0xeef2eef6;
  puVar7 = (uint *)(param_1 + -1);
  if (puVar7 == (uint *)0x0 || uVar5 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) >> 1
         | *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <<
           7;
    *(byte *)puVar7 = (byte)*puVar7;
    pbVar1 = (byte *)(ulonglong)uVar5 + 7;
    *pbVar1 = *pbVar1 | (byte)(uVar5 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar5;
    *puVar7 = *puVar7 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  }
  uVar4 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 | *(byte *)(ulonglong)uVar5);
  uVar5 = *puVar7;
  *puVar7 = *puVar7 - uVar4;
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4 + (uint)(uVar5 < uVar4);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
  uVar5 = uVar4 | 0x9e00bf0 |
          *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  piVar6 = (int *)(ulonglong)uVar5;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (char)puVar7;
  *piVar6 = *piVar6 + (int)puVar7;
  *(uint *)((longlong)piVar6 + (longlong)unaff_RSI) =
       *(int *)((longlong)piVar6 + (longlong)unaff_RSI) + uVar5;
  *(char *)piVar6 = (char)*piVar6 + (char)uVar5;
  *(uint *)(unaff_RBP + -0xb42fff4) = *(uint *)(unaff_RBP + -0xb42fff4) & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

