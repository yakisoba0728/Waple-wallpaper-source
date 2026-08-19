// Function: FUN_1404bf49c
// Addr: 1404bf49c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bf4bd) overlaps instruction at (ram,0x0001404bf4bc)
    */

void FUN_1404bf49c(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  int *in_RAX;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  undefined8 unaff_retaddr;
  undefined1 auStack_ac [156];
  undefined8 uStack_10;
  undefined1 *puVar4;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  *(char *)(param_1 + -0x25) = *(char *)(param_1 + -0x25) + (char)param_2;
  *(char *)((longlong)in_RAX + 0xd) =
       *(char *)((longlong)in_RAX + 0xd) + (char)((ulonglong)in_RAX >> 8);
  bVar1 = *param_4;
  *param_4 = *param_4 + (byte)in_RAX;
  if (CARRY1(bVar1,(byte)in_RAX)) {
    puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
    puVar4 = &stack0xfffffffffffffff8;
    cVar2 = '\x13';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    register0x00000020 = (BADSPACEBASE *)auStack_ac;
  }
  else {
    *(char *)(param_2 + -8) = *(char *)(param_2 + -8) + (char)((ulonglong)param_2 >> 8);
    *in_RAX = *in_RAX + (int)in_RAX;
    func_0x0001189af4bc(unaff_retaddr);
    cVar2 = '\x13';
    puVar3 = (undefined8 *)register0x00000020;
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar2 = cVar2 + -1;
      puVar4 = (undefined1 *)register0x00000020;
    } while ('\0' < cVar2);
  }
  *(undefined1 **)((longlong)register0x00000020 + -0xa0) = puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

