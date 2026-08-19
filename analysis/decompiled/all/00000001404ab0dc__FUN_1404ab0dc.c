// Function: FUN_1404ab0dc
// Addr: 1404ab0dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab0f6) overlaps instruction at (ram,0x0001404ab0f5)
    */

void FUN_1404ab0dc(char *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined8 in_RAX;
  byte bVar4;
  char cVar5;
  undefined1 (*unaff_RBX) [16];
  int *unaff_RSI;
  longlong unaff_RDI;
  bool in_OF;
  undefined1 in_XMM1 [16];
  
  cVar5 = (char)((ulonglong)param_1 >> 8);
  bVar4 = (byte)param_1;
  rsqrtps(in_XMM1,*unaff_RBX);
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI - (int)in_RAX;
  *param_1 = *param_1 + cVar5;
  if (*param_1 != '\0') {
    *param_2 = *param_2 + bVar4;
    bVar1 = *param_2;
    *param_2 = *param_2 + bVar4;
    if (!CARRY1(bVar1,bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = in(0xb);
    pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
    *pcVar2 = *pcVar2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + -0x5077fff2) = *(char *)(unaff_RDI + -0x5077fff2) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

