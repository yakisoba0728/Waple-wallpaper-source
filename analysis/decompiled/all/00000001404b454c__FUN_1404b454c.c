// Function: FUN_1404b454c
// Addr: 1404b454c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b454c(byte *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int *unaff_RSI;
  char *unaff_RDI;
  longlong unaff_retaddr;
  undefined2 auStackX_8 [16];
  
  param_1[0x19] = param_1[0x19];
  iVar1 = *unaff_RSI;
  bVar4 = *param_1;
  bVar3 = (byte)iVar1;
  *param_1 = *param_1 + bVar3;
  uVar5 = iVar1 + 0x1150005 + (uint)CARRY1(bVar4,bVar3);
  bVar4 = (byte)uVar5;
  *unaff_RDI = *unaff_RDI + bVar4;
  if (param_1 == (byte *)0x1 || *unaff_RDI == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_2 + (ulonglong)uVar5) = *(uint *)(param_2 + (ulonglong)uVar5) & uVar5;
  *(byte *)(auStackX_8 + unaff_retaddr * 4) = *(char *)(auStackX_8 + unaff_retaddr * 4) + bVar4;
  bVar3 = (byte)(uVar5 >> 8);
  uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4 + bVar3);
  cVar2 = in(auStackX_8[0]);
  *unaff_RDI = cVar2;
  *(int *)(ulonglong)uVar5 = (*(int *)(ulonglong)uVar5 - uVar5) - (uint)CARRY1(bVar4,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

