// Function: FUN_1404c2624
// Addr: 1404c2624
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2624(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  cVar4 = (char)param_1;
  *(char *)param_2 = (char)*param_2 + cVar4;
  *param_2 = *param_2 | (uint)in_RAX;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar10;
  bVar2 = bVar5 + *(byte *)(unaff_RSI + (longlong)param_2);
  cVar6 = bVar2 + CARRY1(bVar1,bVar10);
  cRamc007d009e00bf00d = (char)in_RAX;
  if (cVar6 < '\0') {
    *in_RAX = *in_RAX + cRamc007d009e00bf00d +
              (CARRY1(bVar5,*(byte *)(unaff_RSI + (longlong)param_2)) ||
              CARRY1(bVar2,CARRY1(bVar1,bVar10)));
  }
  bVar1 = *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4)));
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4))) + bVar9;
  *(uint *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4))) =
       *(int *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4))) +
       CONCAT22(uVar7,CONCAT11(cVar6,cVar4)) + (uint)CARRY1(bVar1,bVar9);
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar4))) + bVar9;
  uVar3 = (uint)in_RAX + 0x3600470;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *(char *)(unaff_RBP + -0x6ed7ffb4) = *(char *)(unaff_RBP + -0x6ed7ffb4) + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

