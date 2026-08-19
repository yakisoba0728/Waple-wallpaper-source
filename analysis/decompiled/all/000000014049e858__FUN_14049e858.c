// Function: FUN_14049e858
// Addr: 14049e858
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e858(char *param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x700000ea) = *(char *)(in_RAX + 0x700000ea) + (char)param_1;
  uVar2 = in(0x49);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) | 0x640d0004;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  uVar1 = TaskRegister();
  *(undefined2 *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + 'T') - 0x70ffff16) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

