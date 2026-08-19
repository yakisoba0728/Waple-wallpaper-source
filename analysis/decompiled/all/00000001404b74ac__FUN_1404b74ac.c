// Function: FUN_1404b74ac
// Addr: 1404b74ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b74ac(byte *param_1,uint *param_2)

{
  uint uVar1;
  char cVar3;
  int iVar2;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_RSI;
  byte bVar7;
  
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  iVar5 = (int)param_1;
  *param_2 = *param_2 | 0x21004b73;
  bVar7 = CARRY1(*param_1,(byte)param_1);
  *param_1 = *param_1 + (byte)param_1;
  iVar2 = func_0x0001878774d7();
  iVar2 = (iVar2 + -0x1d474500) - (uint)bVar7;
  bVar7 = (byte)((uint)iVar2 >> 8);
  bVar4 = (byte)iVar5;
  cVar3 = bVar7 + bVar4;
  uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),CONCAT11(cVar3,(char)iVar2));
  if (CARRY1(bVar7,bVar4)) {
    *(char *)CONCAT44(uVar6,iVar5) = *(char *)CONCAT44(uVar6,iVar5) + cVar3;
    *param_2 = *param_2 | uVar1;
    *(byte *)CONCAT44(uVar6,iVar5) = *(char *)CONCAT44(uVar6,iVar5) + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + uVar1;
  *unaff_RSI = *unaff_RSI + iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

