// Function: FUN_1404b8294
// Addr: 1404b8294
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b82c8) overlaps instruction at (ram,0x0001404b82c7)
    */

void FUN_1404b8294(undefined1 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  int *unaff_RSI;
  char *unaff_RDI;
  undefined8 uStack_10;
  
  *(int *)(param_2 + -0x755ffe1) = *(int *)(param_2 + -0x755ffe1) + (int)unaff_RBP;
  cVar3 = (char)unaff_EBX;
  *(char *)(unaff_RSI + -0x19fffe0a) = (char)unaff_RSI[-0x19fffe0a] + cVar3;
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x0f';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  uVar2 = (uint)(short)CONCAT71(0xa87a00,bRam00000000a87a0009 | 9);
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  *(undefined1 *)((ulonglong)uVar2 * 2) = param_1;
  if (-1 < (int)uVar2) {
    *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_2 >> 8);
    *param_2 = *param_2 + cVar3;
    *param_2 = *param_2 + cVar3;
    *unaff_RSI = *unaff_RSI + unaff_EBX;
    *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

