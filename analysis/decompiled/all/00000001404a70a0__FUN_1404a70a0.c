// Function: FUN_1404a70a0
// Addr: 1404a70a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a7099) overlaps instruction at (ram,0x0001404a7097)
    */

void FUN_1404a70a0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint *in_RAX;
  char *unaff_RBX;
  longlong unaff_RSI;
  
  do {
    *param_1 = *param_1;
    cVar1 = (char)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + cVar1;
    *(byte *)((longlong)in_RAX + -0x19) = *(byte *)((longlong)in_RAX + -0x19) + cVar1;
    *in_RAX = *in_RAX | (uint)in_RAX;
    if (*in_RAX != 0) {
      *in_RAX = *in_RAX | (uint)in_RAX;
      *param_1 = *param_1 + cVar1;
      *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar3 = (uint *)((ulonglong)in_RAX ^ 5);
    *(byte *)((longlong)puVar3 + -0x19) = *(byte *)((longlong)puVar3 + -0x19) + (byte)puVar3;
    *puVar3 = *puVar3 | (uint)puVar3;
    if (*puVar3 == 0) {
      *(byte *)puVar3 = (byte)*puVar3 - (char)param_1;
      *(byte *)puVar3 = (byte)*puVar3 + (char)((ulonglong)param_1 >> 8);
      if ((byte)*puVar3 != 0) {
        *unaff_RBX = *unaff_RBX + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)puVar3 = (byte)*puVar3 | (byte)puVar3;
      uVar2 = (uint)puVar3 + 0x40000534;
      puVar3 = (uint *)(ulonglong)uVar2;
      out(9,uVar2);
      *(char *)(unaff_RSI + -0x19) = *(char *)(unaff_RSI + -0x19) + (char)((ulonglong)param_2 >> 8);
    }
    *puVar3 = *puVar3 | (uint)puVar3;
    in_RAX = puVar3;
  } while( true );
}

