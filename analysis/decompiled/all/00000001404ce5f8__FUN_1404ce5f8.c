// Function: FUN_1404ce5f8
// Addr: 1404ce5f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce686) overlaps instruction at (ram,0x0001404ce684)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ce60e) */
/* WARNING: Removing unreachable block (ram,0x0001404ce629) */
/* WARNING: Removing unreachable block (ram,0x0001404ce686) */
/* WARNING: Removing unreachable block (ram,0x0001404ce677) */
/* WARNING: Removing unreachable block (ram,0x0001404ce697) */

void FUN_1404ce5f8(longlong param_1,undefined8 param_2,char param_3)

{
  uint in_EAX;
  byte bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  longlong unaff_RBP;
  uint *unaff_RSI;
  char in_CF;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)param_2;
  cVar4 = (char)((ulonglong)param_2 >> 8) + *(char *)(param_1 * 2) + in_CF;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + cVar3;
  bVar1 = (byte)param_1 ^ (byte)*unaff_RSI;
  lVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar1) + -1;
  if (lVar2 == 0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI ^ (uint)lVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  *(char *)(unaff_RBP + -0x1b) = *(char *)(unaff_RBP + -0x1b) + param_3;
  *(char *)unaff_RSI = (char)*unaff_RSI + param_3;
  *(char *)((longlong)unaff_RSI + 0x19002e02) =
       *(char *)((longlong)unaff_RSI + 0x19002e02) + (char)lVar2;
  uRam0000000145aeef23 = uRam0000000145aeef23 | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

