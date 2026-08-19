// Function: FUN_1404b84f4
// Addr: 1404b84f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b84f4(undefined1 param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  char *pcVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined1 auStack_17 [7];
  undefined8 uStack_10;
  
  puVar5 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x1d';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  uRam00000000a8360008 = uRam00000000a8360008 | 0xa8360008;
  bVar3 = bRam0000000000000008 | 8;
  *(undefined1 *)CONCAT44(unaff_0000001c,unaff_EBX) = param_1;
  *unaff_RSI = *unaff_RSI + (char)unaff_EBX;
  if (-1 < *unaff_RSI) {
    *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + param_2;
  piVar2 = (int *)((ulonglong)bVar3 * 2);
  *piVar2 = *piVar2 + unaff_EBX;
  pcVar4 = (char *)((ulonglong)bVar3 | 0x70);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  iRam00000001b8708530 = iRam00000001b8708530 + (int)auStack_17 + -0xe8;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

