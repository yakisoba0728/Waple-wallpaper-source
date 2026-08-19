// Function: FUN_1404a708c
// Addr: 1404a708c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a7095) overlaps instruction at (ram,0x0001404a7094)
    */

void FUN_1404a708c(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  longlong in_RAX;
  uint *puVar3;
  uint *puVar4;
  char *unaff_RBX;
  longlong unaff_RSI;
  
  param_2 = param_2 & *(uint *)(unaff_RSI + in_RAX);
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x2c);
  do {
    *(byte *)puVar3 = (byte)*puVar3 | (byte)puVar3;
    uVar2 = (int)puVar3 + 0x40000534;
    out(9,uVar2);
    *(char *)(unaff_RSI + -0x19) = *(char *)(unaff_RSI + -0x19) + (char)(param_2 >> 8);
    puVar3 = (uint *)(ulonglong)uVar2;
    do {
      puVar4 = puVar3;
      uVar2 = (uint)puVar4;
      *puVar4 = *puVar4 | uVar2;
      *param_1 = *param_1;
      cVar1 = (char)puVar4;
      *(byte *)puVar4 = (byte)*puVar4 + cVar1;
      *(byte *)((longlong)puVar4 + -0x19) = *(byte *)((longlong)puVar4 + -0x19) + cVar1;
      *puVar4 = *puVar4 | uVar2;
      if (*puVar4 != 0) {
        *puVar4 = *puVar4 | uVar2;
        *param_1 = *param_1 + cVar1;
        *(char *)(ulonglong)param_2 = *(char *)(ulonglong)param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar3 = (uint *)((ulonglong)puVar4 ^ 5);
      *(byte *)((longlong)puVar3 + -0x19) = *(byte *)((longlong)puVar3 + -0x19) + (char)puVar3;
      *puVar3 = *puVar3 | (uint)puVar3;
    } while (*puVar3 != 0);
    *(byte *)puVar3 = (byte)*puVar3 - (char)param_1;
    *(byte *)puVar3 = (byte)*puVar3 + (char)((ulonglong)param_1 >> 8);
  } while ((byte)*puVar3 == 0);
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)puVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

