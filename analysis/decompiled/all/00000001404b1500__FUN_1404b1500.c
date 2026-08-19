// Function: FUN_1404b1500
// Addr: 1404b1500
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1500(char *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int in_EAX;
  uint uVar3;
  char *unaff_RSI;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    uVar3 = in_EAX + 0x49f32000 + (uint)in_CF;
    *param_1 = *param_1 + (char)uVar3;
    uVar1 = *(uint *)(ulonglong)uVar3;
    *unaff_RSI = *unaff_RSI + (char)((uVar3 | uVar1) >> 8);
    piVar2 = (int *)(((ulonglong)(uVar3 | uVar1) ^ 0x1e) * 2);
    *piVar2 = *piVar2 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

