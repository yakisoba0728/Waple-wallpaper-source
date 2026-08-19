// Function: FUN_1404bd804
// Addr: 1404bd804
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd804(byte *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar3;
  do {
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + (char)param_1;
    bVar1 = *param_1;
    bVar4 = (byte)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + bVar4;
    if (!CARRY1(bVar1,bVar4) && *param_1 != 0) {
      *(char *)(unaff_RSI + 0x78) = *(char *)(unaff_RSI + 0x78) + (char)in_RAX;
      *in_RAX = *in_RAX | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + (char)((ulonglong)param_2 >> 8);
    uVar2 = *in_RAX;
    *in_RAX = *in_RAX + uVar3;
  } while (!SCARRY4(uVar2,uVar3));
  *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

