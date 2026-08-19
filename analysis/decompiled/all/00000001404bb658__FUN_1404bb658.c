// Function: FUN_1404bb658
// Addr: 1404bb658
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb658(uint *param_1)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint *unaff_RSI;
  
  uVar2 = in_EAX | *param_1;
  cVar1 = (char)uVar2 + *(char *)(ulonglong)uVar2 + '0';
  uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar1;
  *unaff_RSI = *unaff_RSI & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

