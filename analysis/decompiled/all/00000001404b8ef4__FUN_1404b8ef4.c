// Function: FUN_1404b8ef4
// Addr: 1404b8ef4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8ef4(void)

{
  uint uVar1;
  char cVar2;
  undefined2 in_AX;
  char cVar4;
  int *unaff_RSI;
  float10 in_ST0;
  uint *puVar3;
  
  *unaff_RSI = (int)ROUND(in_ST0);
  cVar4 = (char)((ushort)in_AX >> 8);
  cVar2 = (char)in_AX + cVar4;
  uVar1 = CONCAT31((int3)cVar4,cVar2);
  puVar3 = (uint *)(ulonglong)uVar1;
  *puVar3 = *puVar3 & uVar1;
  *(char *)puVar3 = (char)*puVar3 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

