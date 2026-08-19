// Function: FUN_1404a7028
// Addr: 1404a7028
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a703c) overlaps instruction at (ram,0x0001404a703a)
    */

void FUN_1404a7028(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar7;
  char *unaff_RBX;
  longlong unaff_RSI;
  int *unaff_RDI;
  bool in_OF;
  undefined7 uVar6;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  if (in_OF) {
    uVar2 = (int)in_RAX + 0x9e74000;
    while( true ) {
      *(char *)(unaff_RSI + -0x19) = *(char *)(unaff_RSI + -0x19) + cVar7;
      puVar4 = (uint *)(ulonglong)uVar2;
      do {
        puVar5 = puVar4;
        uVar2 = (uint)puVar5;
        *puVar5 = *puVar5 | uVar2;
        *param_1 = *param_1;
        cVar1 = (char)puVar5;
        *(byte *)puVar5 = (byte)*puVar5 + cVar1;
        *(byte *)((longlong)puVar5 + -0x19) = *(byte *)((longlong)puVar5 + -0x19) + cVar1;
        *puVar5 = *puVar5 | uVar2;
        if (*puVar5 != 0) {
          *puVar5 = *puVar5 | uVar2;
          *param_1 = *param_1 + cVar1;
          *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar4 = (uint *)((ulonglong)puVar5 ^ 5);
        *(byte *)((longlong)puVar4 + -0x19) = *(byte *)((longlong)puVar4 + -0x19) + (byte)puVar4;
        *puVar4 = *puVar4 | (uint)puVar4;
      } while (*puVar4 != 0);
      *(byte *)puVar4 = (byte)*puVar4 - (char)param_1;
      *(byte *)puVar4 = (byte)*puVar4 + (char)((ulonglong)param_1 >> 8);
      if ((byte)*puVar4 != 0) break;
      *(byte *)puVar4 = (byte)*puVar4 | (byte)puVar4;
      uVar2 = (uint)puVar4 + 0x40000534;
      out(9,uVar2);
    }
    *unaff_RBX = *unaff_RBX + (char)((ulonglong)puVar5 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX * '\x02';
  pcVar3 = (char *)CONCAT71(uVar6,cVar1);
  if (param_1 != (char *)0x0) {
    *pcVar3 = *pcVar3 + cVar1;
    cVar1 = in(9);
    pcVar3 = (char *)(CONCAT71(uVar6,cVar1) + 0x6c);
    *pcVar3 = *pcVar3 + cVar7;
    *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (int)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

