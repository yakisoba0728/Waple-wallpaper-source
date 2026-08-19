// Function: FUN_1404b7b4c
// Addr: 1404b7b4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7b4c(char *param_1)

{
  int iVar1;
  uint uVar2;
  char *in_RAX;
  undefined2 in_DS;
  
  iVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
  uRam00000001456c7b9c = in_DS;
  *param_1 = *param_1 + (char)((uint)(iVar1 + 0x74a00834) >> 8);
  uVar2 = iVar1 + 0x68a50836;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

