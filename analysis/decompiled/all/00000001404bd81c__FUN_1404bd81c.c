// Function: FUN_1404bd81c
// Addr: 1404bd81c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd81c(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar3;
  uint uVar2;
  uint *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 in_OF;
  
  while( true ) {
    bVar3 = (byte)((ulonglong)in_RAX >> 8);
    if ((bool)in_OF) {
      *(char *)(unaff_RBP + -0x38) = *(char *)(unaff_RBP + -0x38) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    (&stack0x0000004b)[param_2 * 8] = (&stack0x0000004b)[param_2 * 8] + (char)param_1;
    bVar1 = *param_1;
    *param_1 = *param_1 + bVar3;
    uVar2 = (uint)in_RAX;
    if (!CARRY1(bVar1,bVar3) && *param_1 != 0) break;
    *(char *)(unaff_RDI + -8) = *(char *)(unaff_RDI + -8) + (char)((ulonglong)param_2 >> 8);
    in_OF = SCARRY4(*in_RAX,uVar2);
    *in_RAX = *in_RAX + uVar2;
  }
  *(char *)(unaff_RSI + 0x78) = *(char *)(unaff_RSI + 0x78) + (char)in_RAX;
  *in_RAX = *in_RAX | uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

