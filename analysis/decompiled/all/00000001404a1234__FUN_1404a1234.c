// Function: FUN_1404a1234
// Addr: 1404a1234
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1235) overlaps instruction at (ram,0x0001404a1234)
    */

void FUN_1404a1234(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint *in_RAX;
  char unaff_SPL;
  longlong unaff_RSI;
  int *piVar3;
  
  while( true ) {
    *in_RAX = *in_RAX & (uint)in_RAX;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    *(byte *)(unaff_RSI + -0x59bafffd) =
         *(byte *)(unaff_RSI + -0x59bafffd) ^ (byte)((ulonglong)in_RAX >> 8);
    iVar2 = (uint)in_RAX + *in_RAX;
    param_1 = param_1 + -1;
    if (param_1 == 0 || iVar2 == 0) break;
    uVar1 = in(param_2);
    piVar3 = (int *)(ulonglong)uVar1;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)piVar3 = (char)*piVar3 + (char)uVar1;
    *(char *)piVar3 = (char)*piVar3 + (char)((ushort)param_2 >> 8);
    in_RAX = (uint *)(ulonglong)(uVar1 + *piVar3);
    unaff_RSI = unaff_RSI + 2;
  }
  *param_4 = *param_4 + (char)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

