// Function: FUN_1404ab790
// Addr: 1404ab790
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab790(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  char *in_RAX;
  char unaff_SPL;
  int *unaff_RDI;
  bool in_ZF;
  
  cVar1 = (char)in_RAX;
  if (!in_ZF) {
    *param_1 = *param_1 + unaff_SPL;
    *param_2 = *param_2 + cVar1;
    *in_RAX = *in_RAX + cVar1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                     (byte)((ulonglong)param_2 >> 8),cVar1));
  uVar2 = (uint)puVar3 & *puVar3;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || uVar2 == 0) {
    verw();
    *unaff_RDI = *unaff_RDI - (int)param_1;
    *(char *)((ulonglong)uVar2 - 0x4a) = *(char *)((ulonglong)uVar2 - 0x4a) + (char)(uVar2 >> 8);
    *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 - (char)((ulonglong)param_1 >> 8);
  LocalDescriptorTableRegister(*(undefined2 *)(param_2 + 0x29));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

