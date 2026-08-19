// Function: FUN_1404b8c2c
// Addr: 1404b8c2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8c2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined7 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *unaff_RBX;
  int *unaff_RSI;
  char in_CF;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  cVar2 = (char)param_1;
  func_0x0001414bd7bb();
  cVar1 = *(char *)CONCAT71(uVar3,cVar2);
  *(char *)CONCAT44(uVar5,iVar4) = *(char *)CONCAT44(uVar5,iVar4) + (char)iVar4;
  *unaff_RSI = *unaff_RSI + iVar4;
  *unaff_RBX = *unaff_RBX + cVar2 + cVar1 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

