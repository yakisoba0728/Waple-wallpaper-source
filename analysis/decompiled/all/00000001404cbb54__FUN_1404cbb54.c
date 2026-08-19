// Function: FUN_1404cbb54
// Addr: 1404cbb54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cbb6b) overlaps instruction at (ram,0x0001404cbb6a)
    */

void FUN_1404cbb54(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  int *piVar2;
  byte bVar4;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  char in_CF;
  byte *pbVar3;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *(byte *)param_2 = (char)*param_2 + bVar4 + in_CF;
  piVar2 = (int *)(in_RAX | 0xe0);
  *piVar2 = *piVar2 + (int)param_2;
  uVar1 = (int)piVar2 + 0xc621000;
  pbVar3 = (byte *)(ulonglong)uVar1;
  param_1 = param_1 + -1;
  if (param_1 == 0 || uVar1 == 0) {
    *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
    *unaff_RSI = *unaff_RSI;
    *pbVar3 = *pbVar3 + (char)uVar1;
    *param_2 = *param_2 & (uint)param_1;
    bVar4 = bVar4 | *(byte *)(unaff_RBP + (ulonglong)uVar1);
  }
  else {
    *(char *)param_2 = (char)*param_2 + (char)param_1;
    if ((char)*param_2 == '\0') {
      out(*unaff_RSI,(short)param_2);
      halt_baddata();
    }
    cRam00000001804cc1d9 = cRam00000001804cc1d9 + (char)uVar1;
  }
  out(*unaff_RSI,CONCAT11(bVar4,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

